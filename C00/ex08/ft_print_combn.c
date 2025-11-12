/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:27:44 by emurbane          #+#    #+#             */
/*   Updated: 2025/06/28 22:53:25 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_array [11];
int	g_n;

void	print(int x)
{
	int	i;
	int	end;

	while (x < 10)
	{
		g_array[1] = x + '0';
		i = g_n;
		end = i;
		while (i > 0)
		{
			write(1, &g_array[i], 1);
			if (g_array[i] != 10 + '0' - i)
			{
				end = 0;
			}
			i --;
		}
		if (end == 0)
		{
			write(1, ", ", 2);
		}
		x ++;
	}
}

void	rec(int x, int n)
{
	if (n > 1)
	{
		while (x < 9)
		{
			g_array[n] = x + '0';
			rec(x + 1, n - 1);
			x ++;
		}
	}
	else
		print(x);
}

void	ft_print_combn(int n)
{
	int	x;

	g_n = n;
	x = 0;
	rec(x, n);
}
