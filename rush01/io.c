/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 22:37:56 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/06 19:45:27 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdlib.h>

int	is_valid(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if (!(input[i] == ' ' || (input[i] >= '1' && input[i] <= '4')))
		{
			return (0);
		}
		i ++;
	}
	if (i == 31)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	*init(char *input)
{
	int		i;
	int		j;
	int		*digits;
	char	c;

	i = 0;
	j = 0;
	digits = malloc(16 * 4);
	if (!digits)
	{
		write(1, "Error :couldn't allocate memory", 25);
		return (NULL);
	}
	while (input[i] != '\0' && j < 16)
	{
		if (input [i] != ' ')
			digits[j++] = input[i] - '0';
		i ++;
	}
	i = 0;
	while (i < 16)
	{
		c = digits[i++] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (digits);
}

int	**assign(int *digits)
{
	int		**table;
	int		i;
	int		j;
	char	c;

	i = 0;
	table = malloc(4 * 4);
	if (!table)
	{
		return (NULL);
	}
	while (i < 4)
	{
		table[i] = malloc(4 * 4);
		j = 0;
		while (j < 4)
		{
			table[i][j] = digits[i * 4 + j];
			j ++;
		}
		i ++;
	}
	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = table[i][j++] + '0';
			write(1, &c, 1);
		}
		i ++;
	}
	return (table);
}

void	initialize(char *input)
{
	int	*digits;
	int	**groups;
	int	**matrix;

	digits = init(input);
	groups = assign(digits);
	free(digits);
	free(groups);
}
