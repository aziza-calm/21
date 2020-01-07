# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/06 18:47:01 by vletterp          #+#    #+#              #
#    Updated: 2020/01/07 17:16:39 by bcharman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf
FLAGS = -Wall -Wextra -Werror
SRC = sources/*.c
INCLUDES = libft/libft.a

all:
	@make -C libft/
	gcc -g $(SRC) -o $(NAME) $(FLAGS) $(INCLUDES) 

clean:
	@make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	@make -C libft/ clean

re: fclean all
