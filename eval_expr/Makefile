##
## EPITECH PROJECT, 2021
## Makefile do_op
## File description:
## Makefile used for do_op
##

SRC	=	main_eval.c		\
		op.c			\
		operators.c		\
		rpn_creation.c	\
		stack.c			\
		utils.c			\
		rpn_read.c		\
		stack_nb.c		\
		eval_expr.c

OBJ	=	$(SRC:.c=.o)

NAME = 	eval_expr

INCDIR = -I include/

LIBDIR = -L lib/my -lmy

all: $(NAME)

build_lib:
	make -C lib/my

$(NAME): build_lib $(OBJ)
		gcc $(SRC) -o eval_expr $(INCDIR) $(LIBDIR)

clean:
		make clean -C lib/my
		rm -rf $(OBJ)

fclean:		clean
		make fclean -C lib/my
		rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
