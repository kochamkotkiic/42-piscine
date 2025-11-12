/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:54:02 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/10 16:11:30 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 1)
		return (0);
	while (argv[0][i])
	{
		i ++;
	}
	write(1, argv[0], i);
	write(1, "\n", 1);
	return (0);
}
