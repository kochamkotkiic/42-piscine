/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:59:51 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/13 18:42:08 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i ++;
	}
	while (*src)
	{
		dest[i] = *src;
		src ++;
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strjoinh(int size, int len, char **strs, char *sep)
{
	char	*array;
	int		i;
	int		lena;

	i = 0;
	lena = 0;
	array = (char *)malloc(sizeof(char) * (len + 1));
	array[0] = '\0';
	if (!(array))
		return (NULL);
	while (lena < size)
	{
		array = ft_strcat(array, strs[i]);
		if (lena < size - 1)
			array = ft_strcat(array, sep);
		i ++;
		lena ++;
	}
	return (array);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		len;
	int		i;

	if (size == 0)
	{
		arr = malloc(sizeof(char) * 1);
		arr[0] = '\0';
		return (arr);
	}
	len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	arr = ft_strjoinh(size, len, strs, sep);
	return (arr);
}

/*int main(void)
{
	char str[]= "kocham";
	char str1[]= "kotki";
	char str2[]= "i kicie";
	char *kot[]={str,str1,str2};
	char *result= ft_strjoin(3,kot," ");

	printf("%s", result);
	return 0;
}*/
