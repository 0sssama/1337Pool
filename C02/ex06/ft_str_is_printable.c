/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:01:55 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/25 11:05:16 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	ascii_value;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = str[i];
		if (ascii_value < 32 || ascii_value > 126)
			return (0);
		i++;
	}
	return (1);
}
