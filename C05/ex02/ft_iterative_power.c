/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 23:14:16 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/09 23:49:51 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		num *= nb;
		i ++;
	}
	return (num);
}
/*int main(void)
{
	int num = -2;
	int power = 2;
	printf("%d", ft_iterative_power(num, power));
	return 0;
}*/
