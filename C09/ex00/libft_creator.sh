gcc -c -Wall -Werror -Wextra ft_putchar.c
gcc -c -Wall -Werror -Wextra ft_strlen.c
gcc -c -Wall -Werror -Wextra ft_putstr.c
gcc -c -Wall -Werror -Wextra ft_strcmp.c
gcc -c -Wall -Werror -Wextra ft_swap.c
ar rcs libft.a ft_putchar.o ft_strlen.o ft_putstr.o ft_strcmp.o ft_swap.o
rm *.o