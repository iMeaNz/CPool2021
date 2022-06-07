##
## EPITECH PROJECT, 2021
## Makefile do_op
## File description:
## Makefile used for do_op
##

SRC	=	main.c	\
		rush3.c

OBJ	=	$(SRC:.c=.o)

NAME = 	rush3

INCDIR = -I include/

LIBDIR = -L lib/my -lmy

all: $(NAME)

build_lib:
	make -C lib/my

$(NAME): build_lib $(OBJ)
		gcc $(SRC) -o rush3 $(INCDIR) $(LIBDIR)

clean:
		make clean -C lib/my
		rm -rf $(OBJ)

fclean:		clean
		make fclean -C lib/my
		rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
