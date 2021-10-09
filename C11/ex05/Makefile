CC = gcc
FLAGS = -Wall -Wextra -Werror
S = srcs/ft_
FILES = atoi putnbr op_valid operations putstr operate
SRCS = $(addprefix srcs/ft_, $(addsuffix .c, ${FILES}))
OBJCTS = $(addprefix srcs/ft_, $(addsuffix .o, ${FILES}))
LIB = lib_ttwab.a
HEADER=includes
RM= rm -rf
AR= ar rcs
MAIN=main.c
OUT=do-op

all: ${OUT}

${OUT}: ${LIB}
	${CC} ${FLAGS} -I ${HEADER} ${MAIN} ${LIB} -o ${OUT}

${LIB}: ${OBJCTS}
	${AR} ${LIB} ${OBJCTS}

${OBJCTS}: ${SRCS}
	${CC} ${FLAGS} -I ${HEADER} -c ${S}atoi.c -o ${S}atoi.o
	${CC} ${FLAGS} -I ${HEADER} -c ${S}putnbr.c -o ${S}putnbr.o
	${CC} ${FLAGS} -I ${HEADER} -c ${S}op_valid.c -o ${S}op_valid.o
	${CC} ${FLAGS} -I ${HEADER} -c ${S}operations.c -o ${S}operations.o
	${CC} ${FLAGS} -I ${HEADER} -c ${S}putstr.c -o ${S}putstr.o
	${CC} ${FLAGS} -I ${HEADER} -c ${S}operate.c -o ${S}operate.o

clean:
	${RM} ${OBJCTS}

fclean: clean
	${RM} ${LIB}
	${RM} ${OUT}

re: all
