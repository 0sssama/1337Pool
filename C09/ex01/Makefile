CC = gcc
FLAGS = -Wall -Wextra -Werror -c
S = srcs/ft_
FILES = putchar swap putstr strlen strcmp
SRCS = $(addprefix srcs/ft_, $(addsuffix .c, ${FILES}))
OBJCTS = $(addprefix srcs/ft_, $(addsuffix .o, ${FILES}))
LIB = libft.a
RM= rm -f
AR= ar rcs

all: ${LIB}


${LIB}: ${OBJCTS}
	${AR} ${LIB} ${OBJCTS}

${OBJCTS}: ${SRCS}
	${CC} ${FLAGS} ${S}putchar.c -o ${S}putchar.o
	${CC} ${FLAGS} ${S}strlen.c -o ${S}strlen.o
	${CC} ${FLAGS} ${S}strcmp.c -o ${S}strcmp.o
	${CC} ${FLAGS} ${S}putstr.c -o ${S}putstr.o
	${CC} ${FLAGS} ${S}swap.c -o ${S}swap.o

clean:
	${RM} ${OBJCTS}

fclean: clean
	${RM} ${LIB}

re: fclean all
