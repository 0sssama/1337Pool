#include <stdio.h>

char	**ft_split(char *str, char *charset);
int		ft_ct_words(char *str, char *charset);

int	main(int ac, char **av)
{
	int		i;
	char	**array;
	int		wc;

	(void) ac;
	array = ft_split(av[1], av[2]);
	wc = ft_ct_words(av[1], av[2]);
	printf("Word count is %d\n", wc);
	i = 0;
	while (array[i])
	{
		printf("%d. %s\n", i+1, array[i]);
		i++;
	}
}