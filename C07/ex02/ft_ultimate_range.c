/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 00:40:12 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/13 18:44:17 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(range))
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min ++;
		i ++;
	}
	return (i);
}
/*int		main(void)
{
	int		*range;
	int		i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, 0, 0));
	while (i < 4)
	{
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
