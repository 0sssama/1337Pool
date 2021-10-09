/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 09:05:24 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/09 09:07:24 by olabrahm         ###   ########.fr       */
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
	(void) ac;
	(void) av;
	printf("%s (Expected : %s)\n", ft_convert_base("15", "0123456789", "01"), "1111");
	printf("%s (Expected : %s)\n", ft_convert_base("10000", "01", "0123456789"), "16");
	printf("%s (Expected : %s)\n", ft_convert_base("-31", "0123456789", "0123456789abcdef"), "-1f");
	printf("%s (Expected : %s)\n", ft_convert_base("+1f", "0123456789abcdef", "0123456789"), "31");
	printf("%s (Expected : %s)\n", ft_convert_base("0", "0123456789", "0123456789abcdef"), "0");
	printf("%s (Expected : %s)\n", ft_convert_base("0.1234567", "0123456789", "0123456789"), "0");
	printf("%s (Expected : %s)\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"), "7fffffff");
	printf("%s (Expected : %s)\n", ft_convert_base("-80000000", "0123456789abcdef", "0123456789"), "-2147483648");
	return (0);
}