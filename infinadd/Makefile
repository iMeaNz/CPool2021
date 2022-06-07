##
## EPITECH PROJECT, 2021
## Makefile do_op
## File description:
## Makefile used for do_op
##

SRC	=	add.c	\
		sub.c	\
		utils.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME = 	infin_add

INCDIR = -I include/

LIBDIR = -L lib/my -lmy

all: $(NAME)

build_lib:
	make -C lib/my

$(NAME): build_lib $(OBJ)
		gcc $(SRC) -o infin_add $(INCDIR) $(LIBDIR)

clean:
		make clean -C lib/my
		rm -rf $(OBJ)

fclean:		clean
		make fclean -C lib/my
		rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
