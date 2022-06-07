##
## EPITECH PROJECT, 2021
## Makefile do_op
## File description:
## Makefile used for do_op
##

SRC	=	main.c		\
		do_op.c		\
		my_add.c	\
		my_sub.c	\
		my_mul.c	\
		my_div.c	\
		my_mod.c

OBJ	=	$(SRC:.c=.o)

NAME = 	do-op

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


