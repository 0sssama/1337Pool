CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=includes
SRCS=$(wildcard srcs/*.c)
OBJS=$(SRCS:.c=.o)
BIN=do-op

.PHONY: all clean fclean

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) -I $(INCLUDES) $(FLAGS) $(OBJS) -o $(BIN)

%.o: %.c 
	$(CC) -I $(INCLUDES) $(FLAGS) -c $? -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(BIN)

re: fclean all
