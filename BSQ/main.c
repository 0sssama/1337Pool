#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_get_res(char square[], int rf)
{
	int	i;
	int	line_count;
	int	line_length;
	int	*output;

	i = 0;
	line_count = 0;
	line_length = 0;
	output = (int *) malloc(2 * sizeof(int));
	if (!output)
		return (0);
	while (i < rf)
	{
		if (square[i] == '\n')
		{
			if (line_count == 0)
				line_length = i;
			line_count++;
		}
		i++;
	}
	line_count++;
	output[0] = line_length;
	output[1] = line_count;
	return (output);
}

char	**ft_get_square(char square[], int x, int y)
{
	char	**output;
	int		i;
	int		j;
	int		square_index;

	output = (char **) malloc(y * sizeof(char *));
	i = 0;
	while (i < y)
	{
		j = 0;
		output[i] = (char *) malloc(x * sizeof(char));
		while(j < x)
		{
			output[i][j] = square[square_index++];
			j++;
		}
		output[i][j] = '\0';
		square_index++;
		i++;
	}
	output[i] = 0;
	return (output);
}

int	main(void)
{
	int	rf;
	char square[29000] = "...............\n........o......\n....o..........\n...............\n...............\n.o.............\n.o............o\no..............\n...............\n...............";
	int	*resolution;
	/*
	of = open("square.txt", O_RDONLY);
	while (read(of, &c, 1))
	{
		square[i] = c;
		i++;
	}*/
	rf = ft_strlen(square);
	resolution = ft_get_res(square, rf);
	printf("x = %d\ny = %d\n", resolution[0], resolution[1]);
	int	i = 0;
	char **output = ft_get_square(square, resolution[0], resolution[1]);
	while (output[i])
		printf("%s\n", output[i++]);
}