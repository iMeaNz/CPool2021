##
## EPITECH PROJECT, 2021
## Makefile DAY10
## File description:
## Makefile used to create lib
##

SRC	=	my_put_nbr.c					\
		my_putchar.c					\
		my_putstr.c					\
		my_revstr.c					\
		my_strcmp.c					\
		my_strlen.c					\
		my_strncmp.c					\
		my_swap.c					\
		rush_1_1.c					\
		rush_1_2.c					\
		rush_1_3.c					\
		rush_1_4.c					\
		rush_1_5.c					\
		my_getnbr.c					\
		get_height.c					\
		get_length.c

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


