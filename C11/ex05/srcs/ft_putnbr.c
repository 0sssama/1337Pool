/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:06:02 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/09 11:08:17 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if ((unsigned int) nb < 10 && (unsigned int) nb >= 0)
		ft_putchar((unsigned int) nb + '0');
	else if (nb >= 10)
	{
		ft_putnbr((unsigned int) nb / 10);
		ft_putnbr((unsigned int) nb % 10);
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}
