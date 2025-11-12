/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:49:47 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/05 00:26:49 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*copy;

	copy = dest;
	while (n && *src)
	{
		*dest++ = *src++;
		n --;
	}
	while (n)
	{
		*dest++ = '\0';
		n--;
	}
	return (copy);
}
