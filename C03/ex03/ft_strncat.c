/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:52:19 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/03 16:44:08 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dcount;

	i = 0;
	dcount = 0;
	while (dest[dcount])
	{
		dcount ++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[dcount] = src[i];
		i ++;
		dcount ++;
	}
	dest[dcount] = '\0';
	return (dest);
}
/*int main()
{
   char src[50] = "efghijkl";
   char dest[50]= "abcd";
 
   
   ft_strncat(dest, src, 5);
    
 
   printf("src : %s\n", src);
   printf("dst : %s", dest);
   
   return 0;
}*/
