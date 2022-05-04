# -*- MakeFile -*-

CC=gcc
SRC=main.c school.c
OBJ=$(patsubst %.c,%.o,$(SRC))
NAME=school
RM=rm

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) -f *~ $(NAME)

oclean:
	$(RM) -f *.o

fclean: clean oclean
	$(info The repo has been fully cleaned)

re: fclean all
	$(info Fully rebuilt)
