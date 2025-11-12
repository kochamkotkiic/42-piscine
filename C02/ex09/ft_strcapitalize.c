/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:39:58 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/05 00:50:08 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		new_word;
	char	c;

	i = 0;
	new_word = 1;
	while (*(str + i))
	{
		c = *(str + i);
		if (c >= 'A' && c <= 'Z')
			c += 32;
		if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		{
			if (new_word && c >= 'a' && c <= 'z')
				c -= 32;
			new_word = 0;
		}
		else
			new_word = 1;
		*(str + i) = c;
		i ++;
	}
	return (str);
}
