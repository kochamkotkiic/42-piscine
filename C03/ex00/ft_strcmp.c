/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:17:32 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/02 12:56:34 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 > *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
		s1 ++;
		s2 ++;
	}
	return (0);
}
/*
int main(void)
{
	char str1[] = "ABC";
	char str2[] = "ABZ";
	int cmp = ft_strcmp(str1, str2);
	printf("%d", cmp);
	return 0;
}*/
