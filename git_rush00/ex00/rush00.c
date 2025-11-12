/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:16:11 by msakalin          #+#    #+#             */
/*   Updated: 2025/06/28 15:20:11 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_first_line(int x)
{
	int	begin ;

	begin = x;
	while (x > 0)
	{
		if (x == begin)
			write(1, "o", 1);
		else if (x == 1)
			write(1, "o", 1);
		else
		{
			write(1, "-", 1);
		}
		x--;
	}
}

void	write_body(int x)
{
	int	begin;

	begin = x ;
	while (x > 0)
	{
		if (x == begin || x == 1)
			write (1, "|", 1);
		else
			write (1, " ", 1);
		x--;
	}
}

void	write_last_line(int x)
{
	int	begin;

	begin = x;
	while (x > 0)
	{
		if (x == begin)
			write(1, "o", 1);
		else if (x == 1)
			write(1, "o", 1);
		else
		{
			write(1, "-", 1);
		}
		x--;
	}
}

void	rush(int x, int y)
{
	int	begin;

	begin = y;
	while (y > 0)
	{
		if (y == begin)
			write_first_line(x);
		else if (y == 1)
			write_last_line(x);
		else
			write_body(x);
		write(1, "\n", 1);
		y--;
	}
}
