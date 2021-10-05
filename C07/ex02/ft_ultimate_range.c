/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:51:20 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/01 20:14:59 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	current_num;
	int	range_len;
	int	*table_ptr;

	range_len = max - min;
	if (range_len <= 0)
	{
		*range = 0;
		return (0);
	}
	table_ptr = (int *) malloc(range_len * sizeof(int));
	if (!table_ptr)
		return (-1);
	current_num = min;
	i = 0;
	while (current_num < max)
	{
		table_ptr[i] = current_num;
		current_num++;
		i++;
	}
	*range = table_ptr;
	return (i);
}
