/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 19:43:58 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/09 12:15:30 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_valid(char *base)
{
	int	len;
	int	i;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-' || base[len] == ' ')
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

int	ft_pow(int nb, int base, char c)
{
	int	num;

	num = 1;
	if (c >= '0' && c <= '9')
		c = c - '0';
	else if (c >= 'a' && c <= 'z')
		c = c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		c = c - 'A' + 10;
	while (base > 0)
	{
		num *= nb;
		base --;
	}
	return (c * num);
}

int	value_of(char *str, int i, int len)
{
	char	c;
	int		num;
	int		j;

	j = 0;
	num = 0;
	while (*str)
	{
		while (*str != '-' && *str != ' ' && *str != '+' && i >= 0)
		{
			j = 1;
			c = *str;
			num += (ft_pow(len, i, c));
			i --;
			str ++;
		}
		if (j == 1)
			return (num);
		str ++;
	}
	return (num);
}

int	conv(char *str, char *base)
{
	int	i;
	int	c;
	int	len;
	int	j;

	i = 0;
	j = 0;
	c = 0;
	len = is_valid(base);
	while (str[j])
	{
		if ((str[j] >= '0' && str[j] <= '9') || (str[j] >= 'A' && str[j] <= 'Z')
			|| (str[j] >= 'a' && str[j] <= 'z'))
		{
			i ++;
			if (!(c))
				c = 1;
		}
		else if (c)
			break ;
		j ++;
	}
	return (value_of(str, i - 1, len));
}

int	ft_atoi_base(char *str, char *base)
{
	int	count;
	int	num;
	int	i;

	count = 0;
	i = 0;
	while (*(str + i) < 47)
	{
		if (*(str + i) == '-')
			count ++;
		i ++;
	}
	num = conv(str, base);
	if (count % 2 != 0)
		num *= -1;
	return (num);
}
/*int main(void)
{
	char *str= " ---+-+2A -2";
	char *base= "0123456789ABCDEF";
	printf("%d", ft_atoi_base(str, base));
	return 0;
}*/