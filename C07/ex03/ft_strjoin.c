/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:59:11 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/30 17:16:32 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_get_len(int size, char *strs[])
{
	int i;
	int	output;
	int	j;

	i = 0;
	j = 0;
	output = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			output++;
			j++;
		}
		j = 0;
		i++;
	}
	return (output + size - 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char *output_str;

	i = 0;
	// output_str = malloc()
	while (i < size)
	{
		printf("h");
	}
}

int	main(void)
{
	char	*a[3];

	strcpy(a[0], "ok");
	strcpy(a[1], "hh");
	strcpy(a[2], "ok");
	printf("%d\n", ft_get_len(3, a));
}
