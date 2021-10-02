/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:09:00 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/02 15:09:01 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_get_index(char c, char *str);
int		ft_is_space(char c);
int		g_output_index = 0;
char	*g_output_str;

int	ft_atoi_base(char *str, char *base)
{
	int	output;
	int	negative;
	int	i;

	negative = 1;
	i = 0;
	output = 0;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] && ft_get_index(str[i], base) >= 0)
		output = (output * ft_strlen(base)) + ft_get_index(str[i++], base);
	return (output * negative);
}

void	ft_print_base_value(int nbr, int base_len, char *base)
{
	unsigned int	i;
	unsigned int	bl;

	bl = (unsigned int) base_len;
	if (nbr < 0)
	{
		g_output_str[0] = '-';
		g_output_index++;
		i = (unsigned int)(nbr * -1);
	}
	else
		i = (unsigned int) nbr;
	if (i >= bl)
	{
		ft_print_base_value(i / bl, base_len, base);
		ft_print_base_value(i % bl, base_len, base);
	}
	else
	{
		g_output_str[g_output_index] = base[i];
		g_output_index++;
	}
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	g_output_str = (char *) malloc(512 * sizeof(char));
	if (g_output_str == 0)
		return (0);
	ft_print_base_value(nbr, base_len, base);
	g_output_str[g_output_index] = '\0';
	free(g_output_str);
	return (g_output_str);
}
