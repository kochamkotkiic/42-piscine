/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:05:14 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/14 12:49:41 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

enum
{
	TRUE = 1,
	FALSE = 0,
	SUCCESS = 0
};

char		*EVEN_MSG = "I have an even number of arguments.\n";
char		*ODD_MSG = "I have an odd number of arguments.\n";

static t_bool	EVEN(int nbr)
{
	if (nbr % 2 == 0)
		return (TRUE);
	else
		return (FALSE);
}

#endif*/

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS 0

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(nbr) !(nbr % 2)

typedef int	t_bool;

#endif
