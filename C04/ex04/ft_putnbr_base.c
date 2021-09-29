/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 07:34:37 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/29 16:48:33 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_valid(char *base)
{
	int	i;
	int	j;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	while (i < base_len - 1)
	{
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_base_value(int nbr, int base_len, char *base)
{
	unsigned int	i;

	if (nbr < 0)
	{
		write(1, "-", 1);
		i = (unsigned int)(nbr * -1);
	}
	else
		i = (unsigned int) nbr;
	if (i >= base_len)
	{
		ft_print_base_value(i / base_len, base_len, base);
		ft_print_base_value(i % base_len, base_len, base);
	}
	else
		write(1, &base[i], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (!ft_base_valid(base))
		return ;
	ft_print_base_value(nbr, base_len, base);
}
