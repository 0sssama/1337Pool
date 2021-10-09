CC = gcc
FLAGS = -Wall -Wextra -Werror -c
S = srcs/ft_
FILES = putchar swap putstr strlen strcmp
SRCS = $(addprefix srcs/ft_, $(addsuffix .c, ${FILES}))
OBJCTS = $(addprefix srcs/ft_, $(addsuffix .o, ${FILES}))
LIB = libft.a
HEADER=includes
RM= rm -rf
AR= ar rcs

all: ${LIB}


${LIB}: ${OBJCTS}
	${AR} ${LIB} ${OBJCTS}

${OBJCTS}: ${SRCS}
	${CC} ${FLAGS} -I ${HEADER} ${S}putchar.c -o ${S}putchar.o
	${CC} ${FLAGS} -I ${HEADER} ${S}strlen.c -o ${S}strlen.o
	${CC} ${FLAGS} -I ${HEADER} ${S}strcmp.c -o ${S}strcmp.o
	${CC} ${FLAGS} -I ${HEADER} ${S}putstr.c -o ${S}putstr.o
	${CC} ${FLAGS} -I ${HEADER} ${S}swap.c -o ${S}swap.o

clean:
	${RM} ${OBJCTS}

fclean: clean
	${RM} ${LIB}

re: fclean all
