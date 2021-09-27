/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:58:19 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/24 18:00:54 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	ascii_value;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = str[i];
		if (ascii_value < 65 || ascii_value > 90)
			return (0);
		i++;
	}
	return (1);
}
