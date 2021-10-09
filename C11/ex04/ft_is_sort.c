/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:27:40 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/09 18:16:38 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if ((*f)(tab[j], tab[i]) < 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	cmp(int a, int b)
{
	if (a < b)
		return (-1);
	return (0);
}

int	main(void)
{
	int	tab[9] = {1, 2, 2, 2, 5, 6, 7, 8, 9};

	printf("%d\n", ft_is_sort(tab, 9, &cmp));
}
