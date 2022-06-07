##
## EPITECH PROJECT, 2021
## Makefile advanced_do_op
## File description:
## Makefile used for advanced_do_op
##

SRC	=	main.c				\
		advanced_do_op.c	\
		my_add.c			\
		my_sub.c			\
		my_mul.c			\
		my_div.c			\
		my_mod.c			\
		my_usage.c

OBJ	=	$(SRC:.c=.o)

NAME = 	my_advanced_do-op

INCDIR = ../include

CFLAGS = -I$(INCDIR)

all: $(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) -L"../lib/" -lmy

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re


