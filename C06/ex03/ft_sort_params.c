/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:28:03 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/11 22:59:06 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i ++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 > *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
		s1 ++;
		s2 ++;
	}
	return (0);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (i < size -1)
	{
		while (j < size -1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j ++;
		}
		i ++;
		j = 0;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*tab[1000000];

	i = 0;
	if (argc < 1)
		return (0);
	while (i < argc - 1)
	{
		tab[i] = argv[i + 1];
		i ++;
	}
	ft_sort_int_tab(tab, argc - 1);
	i = 0;
	while (i < argc -1)
	{
		ft_putstr(tab[i]);
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}
