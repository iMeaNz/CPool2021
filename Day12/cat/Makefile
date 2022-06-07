##
## EPITECH PROJECT, 2021
## Makefile do_op
## File description:
## Makefile used for do_op
##

SRC	=	cat.c

OBJ	=	$(SRC:.c=.o)

NAME = 	cat

INCDIR = -I ../include/

LIBDIR = -L ../lib/my -lmy

CRITER = --coverage -lcriterion

TEST = ../test/cat/cat_tests.c

all: $(NAME)

build_lib:
	make -C ../lib/my

$(NAME): build_lib $(OBJ)
		gcc -o $(NAME) $(OBJ) $(INCDIR) $(LIBDIR)
		make clean

tests_run:	$(OBJ)
		gcc -o test_cat $(OBJ) $(TEST) 

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
