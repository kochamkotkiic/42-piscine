/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:47:36 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/09 20:22:21 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
	{
		count ++;
	}
	return (count);
}
/*int main(void)
{
	char str[] = "kotek";
	int count = ft_strlen(str);
	printf("%d",count);
	return 0;
}*/
