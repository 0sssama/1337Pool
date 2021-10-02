/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:10:17 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/02 15:10:18 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_base_valid(char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_is_space(char c);
int		ft_get_index(char c, char *str);
int		ft_strlen(char *str);
void	ft_print_base_value(int nbr, int base_len, char *base);
void	ft_putnbr_base(int nbr, char *base);

int	main(int ac, char **av)
{
	char	*str;

	if (ac < 4)
	{
		puts("[!]	An error has occurred!");
		puts("[!]	PLS make sure to run the program in this syntax :");
		puts("	./[PROGRAM NAME] [NUMBER] [BASE FROM] [BASE TO]");
	}
	else
	{
		str = ft_convert_base(av[1], av[2], av[3]);
		printf("%s\n", str);
	}
	return (0);
}
