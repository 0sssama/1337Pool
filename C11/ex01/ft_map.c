/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 09:37:35 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/09 13:59:03 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*output;
	int	i;

	output = (int *) malloc(length * sizeof(int));
	if (output == 0)
		return (0);
	i = 0;
	while (i < length)
	{
		output[i] = (*f)(tab[i]);
		i++;
	}
	return (output);
}
