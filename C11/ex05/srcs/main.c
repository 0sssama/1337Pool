/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:48:31 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/14 11:36:12 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ttwab.h"

int	main(int ac, char **av)
{
	int		n1;
	int		n2;
	int		result;
	char	op;

	if (ac == 4)
	{
		n1 = ft_atoi(av[1]);
		op = av[2][0];
		n2 = ft_atoi(av[3]);
		if (n2 == 0 && op == '/')
		{
			ft_puterr("Stop : division by zero\n");
			return (-1);
		}
		if (n2 == 0 && op == '%')
		{
			ft_puterr("Stop : modulo by zero\n");
			return (-1);
		}
		ft_operate(n1, n2, op, &result);
		ft_putnbr(result);
		write(1, "\n", 1);
	}
	return (0);
}
