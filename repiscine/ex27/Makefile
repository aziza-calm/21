# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcharman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/08 20:38:17 by bcharman          #+#    #+#              #
#    Updated: 2019/04/08 20:48:41 by bcharman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc -c -Wall -Wextra -Werror read.c 
	gcc read.o -o ft_display_file

clean:
	rm -f read.o

fclean: clean
	rm -f ft_display_file

re: fclean all
