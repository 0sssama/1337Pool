/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:26:26 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/01 20:53:42 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_ascii(char *str)
{
	int	i;
	int	output;

	i = 0;
	output = 0;
	while (str[i])
	{
		output += str[i];
		i++;
	}
	return (output);
}

void	ft_sort(int ac, char **av)
{
	char	*swap;
	int		i;
	int		j;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_ascii(av[i]) > ft_ascii(av[j]))
			{
				swap = av[i];
				av[i] = av[j];
				av[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;

	i = 1;
	ft_sort(ac, av);
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putstr("\n");
		i++;
	}
}
