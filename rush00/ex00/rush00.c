/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:59:02 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/27 11:18:23 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 0;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			if ((b == 0 && a == 0) || (a == 0 && b == y - 1)
				|| (a == x - 1 && b == 0) || (a == x - 1 && b == y - 1))
				ft_putchar('o');
			else if (b == 0 || b == y - 1)
				ft_putchar('-');
			else if (a == 0 || a == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			a++;
		}
		b++;
		ft_putchar('\n');
	}
}
