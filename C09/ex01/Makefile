CC = gcc
FLAGS = -Wall -Wextra -Werror
S = srcs/ft_

all: libft.a

libft.a: ${S}putchar.c ${S}strlen.c ${S}putstr.c ${S}strcmp.c ${S}swap.c includes/ft.h
	CC -c ${FLAGS} ${S}putchar.c -o ${S}putchar.o
	CC -c ${FLAGS} ${S}strlen.c -o ${S}strlen.o
	CC -c ${FLAGS} ${S}putstr.c -o ${S}putstr.o
	CC -c ${FLAGS} ${S}strcmp.c -o ${S}strcmp.o
	CC -c ${FLAGS} ${S}swap.c -o ${S}swap.o
	ar rcs libft.a srcs/*.o

clean:
	find . -type f -name "*.o" -delete

fclean: clean
	find . -type f \( -name "a.out" -o -name "libft.a" \) -delete

re: fclean all
