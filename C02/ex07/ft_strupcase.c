/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:03:54 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/25 06:34:16 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	ascii_value;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = str[i];
		if (ascii_value >= 97 && ascii_value <= 122)
			str[i] = ascii_value - 32;
		i++;
	}
	return (str);
}
