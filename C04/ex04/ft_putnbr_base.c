/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:51:47 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/07 18:30:49 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid(char *base)
{
	int	len;
	int	i;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-')
			return (0);
		if (base[len] < 32 || base[len] > 126)
			return (0);
		i = len + 1;
		while (base[i])
		{
			if (base[len] == base[i])
				return (0);
			i ++;
		}
		len ++;
	}
	if (len < 2)
		return (0);
	return (len);
}

void	exception(unsigned int nbr, unsigned int len, char *base)
{
	if (nbr >= len)
	{
		exception(nbr / len, len, base);
		exception(nbr % len, len, base);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = is_valid(base);
	if (len == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		exception(2147483648, len, base);
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr >= len)
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
		if (nbr < len)
			ft_putchar(base[nbr]);
	}
}
/*t main(void)
{
	char base[]= "01";
	int nbr = -5334235;
	ft_putnbr_base(nbr, base);
	return 0;
}*/
