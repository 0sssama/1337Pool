/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:21:53 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/14 11:38:07 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ttwab.h"

void	ft_operate(int n1, int n2, char op, int *result)
{
	if (op == '+')
		*result = ft_do_op(&addition, n1, n2);
	if (op == '-')
		*result = ft_do_op(&subtract, n1, n2);
	if (op == '/')
		*result = ft_do_op(&division, n1, n2);
	if (op == '*')
		*result = ft_do_op(&multiply, n1, n2);
	if (op == '%')
		*result = ft_do_op(&modulo, n1, n2);
}
