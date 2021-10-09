/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:21:53 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/09 12:27:13 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ttwab.h"

void	ft_operate(int n1, int n2, char op)
{
	if (op == '+')
		ft_putnbr(addition(n1, n2));
	else if (op == '-')
		ft_putnbr(subtract(n1, n2));
	else if (op == '*')
		ft_putnbr(multiply(n1, n2));
	else if (op == '/')
	{
		if (n2 == 0)
		{
			ft_putstr("Stop : division by zero");
			return ;
		}
		ft_putnbr(division(n1, n2));
	}
	else
	{
		if (n2 == 0)
		{
			ft_putstr("Stop : modulo by zero");
			return ;
		}
		ft_putnbr(modulo(n1, n2));
	}
}
