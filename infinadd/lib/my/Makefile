##
## EPITECH PROJECT, 2021
## Makefile DAY10
## File description:
## Makefile used to create lib
##

SRC	=	my_putstr.c					\
		my_revstr.c					\
		my_putchar.c				\
		my_strcmp.c					\
		my_strlen.c					\
		my_swap_char.c				\
		my_swap.c					\
		my_str_isnum.c

OBJ	=	$(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
