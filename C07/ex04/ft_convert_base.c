/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 14:54:45 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/04 16:46:23 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_atoi_base(char *str, char *base);
char	*ft_putnbr_base(int nbr, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\r'
		|| c == '\f' || c == '\v' || c == '\n');
}

int	ft_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_is_space(base[i]))
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
