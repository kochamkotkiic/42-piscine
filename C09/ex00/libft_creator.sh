# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emurbane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 14:07:52 by emurbane          #+#    #+#              #
#    Updated: 2025/07/17 16:30:07 by emurbane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
SRC_FILES="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
gcc -Wall -Wextra -Werror -c $SRC_FILES || exit 1
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o && rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
rm -f $OBJ_FILES
