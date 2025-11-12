/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 22:51:24 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/09 23:05:44 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	fac = 1;
	i = 2;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fac *= i;
		i ++;
	}
	return (fac);
}
/*int main(void)
{
	int num =1 ;
	printf("%d", ft_iterative_factorial(num));
	return 0;
}*/
