/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:23:41 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/13 14:44:36 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	ptr = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (ptr == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*output;
	int					i;
	int					j;

	output = (struct s_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (output == 0)
		return (0);
	i = 0;
	j = 0;
	while (i < ac && av[i])
	{
		output[j].size = ft_strlen(av[i]);
		output[j].str = av[i];
		output[j].copy = ft_strdup(av[i]);
		i++;
		j++;
	}
	output[j].str = 0;
	return (output);
}
