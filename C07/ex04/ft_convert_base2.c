/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:09:00 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/07 16:19:19 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_get_index(char c, char *str);
int		ft_is_space(char c);
int		g_start_index = 0;
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

void	ft_rev_str(char *str, int start_index)
{
	int		i;
	int		j;
	int		str_len;
	char	temp;

	i = start_index;
	str_len = ft_strlen(str);
	j = str_len - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int	ft_get_size(int nbr, int len)
{
	int	i;

	if (nbr == 0)
		return (1);
	i = 1;
	while (nbr)
	{
		nbr /= len;
		i++;
	}
	return (i);
}

void	ft_print_base_value(int nbr, int base_len, char *base)
{
	unsigned int	i;
	unsigned int	bl;

	bl = (unsigned int) base_len;
	if (nbr < 0)
	{
		g_output_str[0] = '-';
		g_start_index = 1;
		g_output_index++;
		i = (unsigned int)(nbr * -1);
	}
	else
		i = (unsigned int) nbr;
	if (i == 0)
	{
		g_output_str[g_output_index] = base[0];
		g_output_index++;
	}
	while (i)
	{
		g_output_str[g_output_index] = base[i % base_len];
		g_output_index++;
		i /= base_len;
	}
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		size;

	base_len = ft_strlen(base);
	size = ft_get_size(nbr, base_len);
	if (nbr < 0)
		size++;
	g_output_str = (char *) malloc(size * sizeof(char) + 1);
	if (g_output_str == 0)
		return (0);
	ft_print_base_value(nbr, base_len, base);
	g_output_str[g_output_index] = '\0';
	ft_rev_str(g_output_str, g_start_index);
	return (g_output_str);
}
