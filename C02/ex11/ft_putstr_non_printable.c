/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:00:00 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/25 11:52:01 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(int ascii_value)
{
	char	*hex;
	int		div;
	int		mod;

	hex = "0123456789abcdef";
	div = ascii_value / 16;
	mod = ascii_value % 16;
	ft_putchar(hex[div]);
	ft_putchar(hex[mod]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	current_char;
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		current_char = str[i];
		if (current_char < 32 || current_char > 126)
		{
			ft_putchar('\\');
			ft_print_hex((unsigned int) current_char);
		}
		else
			ft_putchar(current_char);
		i++;
	}
}
