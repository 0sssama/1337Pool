/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 07:53:16 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/23 08:11:17 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int a)
{
	if (a < 0)
	{
		ft_putchar('-');
		ft_print_number(a * -1);
	}
	else if (a >= 10)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar('0' + a);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_number(a);
			ft_putchar(' ');
			ft_print_number(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
