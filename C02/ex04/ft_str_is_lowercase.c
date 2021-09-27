/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:24:21 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/25 06:29:10 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	ascii_value;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = str[i];
		if (ascii_value < 97 || ascii_value > 122)
			return (0);
		i++;
	}
	return (1);
}
