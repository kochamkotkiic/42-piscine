/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 23:40:38 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/11 23:59:58 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	array = malloc((max - min) * sizeof(int));
	i = 0;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		min ++;
		i ++;
	}
	return (array);
}
/*int main(void)
{
	//int *array=ft_range(-10, -5);
	ft_range(-10, -5);
	unsigned int i =0;
	if (array)
	{
		while(i < sizeof(array))
		{
			printf("%d\n", array[i]);
			i ++;
		}
	}
	return 0;
}*/
