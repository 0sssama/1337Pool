/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 06:35:16 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/25 18:43:57 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97)
			|| (str[i] > 122 && str[i] <= 127))
			new_word = 1;
		else if (new_word)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
			new_word = 0;
		}
		else
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
