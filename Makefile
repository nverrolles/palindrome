##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## oui
##

SRC	=	./src/main.c		\
		./src/p_option.c	\
		./src/n_option.c	\
		./src/parser.c		\
		./src/utils.c		\
		./src/error.c		\
		./src/base.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I./include/

DFLAGS	=	-g

LIB	=	-L ./lib/my -lmy

NAME	=	palindrome

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./lib/my
	gcc $(OBJ) $(CFLAGS) -o $(NAME) $(LIB)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	make fclean -C ./lib/my

re:	fclean all

debug:	$(OBJ)
	make -C ./lib/my
	gcc $(OBJ) $(DFLAGS) $(CFLAGS) -o $(NAME) $(LIB)
