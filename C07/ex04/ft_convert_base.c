/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:42:19 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/09 19:34:53 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_putnbr_base(int nbr, char *base);
int		ft_is_space(char c);
int		ft_strlen(char *str);

int	g_bl;
int	g_res;
int	g_sig;
int	g_i;

int	ft_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || ft_is_space(base[i]))
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	pos(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_get_index(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	output;
	int	negative;
	int	i;

	negative = 1;
	i = 0;
	output = 0;
	if (!ft_base_valid(base))
		return (0);
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*output;
	int		num;

	if (!nbr || !ft_base_valid(base_from) || !ft_base_valid(base_to))
		return (0);
	num = ft_atoi_base(nbr, base_from);
	output = ft_putnbr_base(num, base_to);
	return (output);
}
