SRC = main.c \
		validation.c \
		reading.c \
		map.c \
		print_map.c
OBJ = ${SRC:.c=.o}
INCL = ft.h
NAME = fillit

all: $(NAME)

$(NAME): $(OBJ)
	gcc -g $(OBJ) -I $(INCL) libft/libft.a -o fillit

$(OBJ):
	gcc -c $(SRC)

clean:
	rm -f *.o
	rm -f ft.h.gch

fclean: clean
	rm -f fillit

re: fclean all
