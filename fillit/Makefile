SRC = main.c \
		validation.c
OBJ = ${SRC:.c=.o}
INCL = ft.h
NAME = fillit

all: $(NAME)

$(NAME): $(OBJ)
	gcc -g $(OBJ) -I $(INCL) -o fillit

$(OBJ):
	gcc -c $(SRC)

clean:
	rm -f *.o
	rm -f ft.h.gch

fclean: clean
	rm -f fillit

re: fclean all
