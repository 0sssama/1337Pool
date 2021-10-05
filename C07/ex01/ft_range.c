/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:25:33 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/04 18:37:12 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range_len;
	int	*table_ptr;
	int	current_num;
	int	i;

	range_len = max - min;
	table_ptr = (int *) malloc(range_len * sizeof(int));
	if (range_len <= 0 || !table_ptr)
		return (0);
	current_num = min;
	i = 0;
	while (current_num < max)
	{
		table_ptr[i] = current_num;
		current_num++;
		i++;
	}
	return (table_ptr);
}
