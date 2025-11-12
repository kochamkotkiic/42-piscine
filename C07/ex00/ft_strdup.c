/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 23:19:32 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/14 20:27:57 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
/*char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = malloc(sizeof(src) * sizeof(char));
	if (!(str))
		return (NULL);
	i = 0;
	while (*(src + i))
	{
		*(str + i) = *(src + i);
		i ++;
	}
	*(str + i) = '\0';
	return (str);
}*/
char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len ++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (i <= len)
	{
		dup[i] = src[i];
		i ++;
	}
	return (dup);
}
/*int main(void)
{
	char src[]="kotek kotki";
	char *target=ft_strdup(src);
	printf("%s", target);
	return 0;
}*/
