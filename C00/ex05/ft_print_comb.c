/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:11:51 by emurbane          #+#    #+#             */
/*   Updated: 2025/06/30 17:51:32 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	write_dig(int num1, int num2, int num3)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	if (!(num1 == 55 && num2 == 56 && num3 == 57))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 48;
	while (num1 <= 57)
	{
		num2 = num1 + 1;
		while (num2 <= 57)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				if (num1 != num2 && num2 != num3 && num3 != num1)
				{
					write_dig(num1, num2, num3);
					num3 += 1;
				}
			}
			num2 += 1;
		}
		num1 += 1;
	}
}
