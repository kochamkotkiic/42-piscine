/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:26:44 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/09 11:35:03 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		if (*str == to_find[0])
		{
			i = 1;
			while (str[i] != '\0' && str[i] == to_find[i])
				i ++;
			if (to_find[i] == '\0')
				return (str);
		}
		str ++;
	}
	return (NULL);
}
