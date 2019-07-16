SRC = main.c
OBJ = ${SRC:.c=.o}
INCL = ft.h
NAME = fillit

all: $(NAME)

$(NAME): $(OBJ)
	gcc -g $(OBJ) $(INCL)

$(OBJ):
	gcc -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f fillit

re: fclean all
