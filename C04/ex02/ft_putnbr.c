/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:58:25 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/08 13:15:54 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ifs(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
}

void	print(int *b, int i)
{
	while (i > 0)
	{
		i -= 1;
		write(1, &b[i], 1);
	}
}

void	ft_putnbr(int nb)
{
	int	array[12];
	int	digit;
	int	i;

	i = 0;
	ifs(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		nb = 0;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		digit = nb % 10;
		nb /= 10;
		array[i] = digit + '0';
		i ++;
	}
	print(array, i);
}
/*int main(void)
{	
	ft_putnbr(2147483647);
	return 0;
}*/
