/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:48:50 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/09 22:45:57 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destl;
	unsigned int	srcl;

	i = 0;
	destl = 0;
	srcl = 0;
	while (dest[destl] != '\0')
		destl ++;
	while (src[srcl] != '\0')
		srcl ++;
	j = destl;
	if (size <= destl)
		return (srcl + size);
	while (src[i] && i < size - destl - 1)
	{
		dest[j] = src[i];
		i ++;
		j ++;
	}
	dest[j] = '\0';
	return (destl + srcl);
}
/*int main(void)
{
	char dest[] = "kotek kotki";
	unsigned int wynik = ft_strlcat(dest,"kot", sizeof(dest));
	printf("%u", wynik);
	return 0;
}*/
