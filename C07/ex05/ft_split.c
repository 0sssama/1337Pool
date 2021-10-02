/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:18:12 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/02 18:18:13 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_ct_occurrences(char *str, char *charset)
{
	int	i;
	int	j;
	int	occurrences;

	i = 0;
	occurrences = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == charset[j])
		{
			if (charset[j + 1] == '\0')
			{
				occurrences++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (occurrences);
}

char	**ft_split(char *str, char *charset)
{
	
}

int	main(int ac, char **av)
{
	printf("%d\n", ft_get_len(av[1], av[2]));
}