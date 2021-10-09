/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:48:31 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/09 18:30:50 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ttwab.h"

int	main(int ac, char **av)
{
	char	*op_str;
	char	op;
	int		n1;
	int		n2;

	if (ac < 4)
		return (-1);
	n1 = ft_atoi(av[1]);
	op_str = av[2];
	n2 = ft_atoi(av[3]);
	if (!ft_op_valid(op_str))
	{
		ft_putnbr(0);
		ft_putstr("\n");
		return (-1);
	}
	op = op_str[0];
	ft_operate(n1, n2, op);
	ft_putstr("\n");
	return (0);
}
