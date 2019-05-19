# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcharman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 18:43:03 by bcharman          #+#    #+#              #
#    Updated: 2019/04/07 19:22:57 by bcharman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap

SOURCES := $(patsubst %, ./srcs/%.c, $(SRC))
INCLUDES := $(wildcard ./includes/*.h)
OBJECTS  := $(patsubst %, ./%.o, $(SRC))

all:
	gcc -c $(SOURCES) $(INCLUDES)
	ar rc libft.a $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f libft.a

re: fclean all
