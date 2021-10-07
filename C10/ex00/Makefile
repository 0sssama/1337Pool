CC=gcc
FLAGS=-Wall -Wextra -Werror
FN=ft_display_file
SC=$(addsuffix .c, ${FN})
RM=rm -r

all: ${FN}

${FN}:
	${CC} ${FLAGS} ${SC} -o ${FN}

clean:
	${RM} ${FN}

fclean: clean