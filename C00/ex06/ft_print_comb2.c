/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:41:12 by emurbane          #+#    #+#             */
/*   Updated: 2025/06/27 23:10:25 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(int a, int b, int c)
{
	int	d;

	d = 48;
	while (d <= 57)
	{
		if (c * 10 + d > a * 10 + b)
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (! (a == 57 && b == 56 && c == 57 && d == 57))
			{
				write(1, ", ", 2);
			}
		}
		d ++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
				print_comb(a, b, c);
				c ++;
			}
			b ++;
		}
		a ++;
	}
}
