/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:45:54 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/09 19:35:14 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*g_output_str;
int		g_output_index = 0;
int		g_bl;
int		g_size;

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
	return (c == '\t' || c == '\n' || c == '\f'
		|| c == '\r' || c == ' ' || c == '\v');
}

int	ft_size(int nbr)
{
	int	i;

	if (nbr == 0)
		return (1);
	i = 0;
	while (nbr)
	{
		nbr /= g_bl;
		i++;
	}
	return (i);
}

void	ft_putnbr_base_value(int nb, char *b)
{
	unsigned int	i;
	unsigned int	bl;
	int				len;

	bl = (unsigned int)g_bl;
	if (nb < 0)
	{
		i = (unsigned int)(nb * -1);
		g_output_index = 1;
	}
	else
	{
		i = (unsigned int)nb;
		g_output_index = 0;
	}
	len = g_size;
	while (g_output_index < len)
	{
		g_output_str[--len] = b[i % bl];
		i /= bl;
	}
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		i;

	g_output_index = 0;
	i = 0;
	g_bl = ft_strlen(base);
	g_size = ft_size(nbr);
	if (nbr < 0)
		g_size++;
	g_output_str = (char *) malloc(g_size * sizeof(char) + 1);
	if (!g_output_str)
		return (0);
	if (nbr < 0)
		g_output_str[0] = '-';
	ft_putnbr_base_value(nbr, base);
	g_output_str[g_size] = '\0';
	return (g_output_str);
}
