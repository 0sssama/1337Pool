/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:16:44 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/29 08:06:19 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\r'
			|| c == '\f' || c == '\v' || c == '\n');
}

int	ft_atoi(char *str)
{
	int		output;
	int		negative;
	int		i;

	output = 0;
	negative = 1;
	i = 0;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		output = output * 10 + (str[i] - 48);
		i++;
	}
	return (output * negative);
}
