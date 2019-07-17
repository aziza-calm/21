SRC = main.c
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

fclean: clean
	rm -f fillit

re: fclean all
