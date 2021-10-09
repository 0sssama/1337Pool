/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:24:57 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/09 11:45:58 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ttwab.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_op_valid(char *str)
{
	int	op_len;

	op_len = ft_strlen(str);
	if (!str || op_len != 1)
		return (0);
	return (str[0] == '+' || str[0] == '-' || str[0] == '%'
		|| str[0] == '*' || str[0] == '/');
}
