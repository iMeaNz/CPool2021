##
## EPITECH PROJECT, 2021
## Makefile CSFML
## File description:
## Makefile used for csfml
##

OBJ	=	$(SRC:.c=.o)

NAME = 	task

all: $(NAME)

$(NAME): $(OBJ)
		cd task01 && gcc -o task task1.c -lcsfml-graphics
		cd task02 && gcc -o task task2.c -lcsfml-graphics
		cd task03 && gcc -o task task3.c -lcsfml-graphics
		cd task04 && gcc -o task task4.c -lcsfml-graphics

clean:
		cd task01 && rm -f $(OBJ)
		cd task02 && rm -f $(OBJ)
		cd task03 && rm -f $(OBJ)
		cd task04 && rm -f $(OBJ)

fclean:		clean
		cd task01 && rm -f $(NAME)
		cd task02 && rm -f $(NAME)
		cd task03 && rm -f $(NAME)
		cd task04 && rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
