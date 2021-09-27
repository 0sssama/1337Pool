/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:19:11 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/24 17:23:54 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	ascii_value;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = str[i];
		if (ascii_value < 48 || ascii_value > 57)
			return (0);
		i++;
	}
	return (1);
}
