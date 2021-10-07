/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:25:33 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/07 16:11:47 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range_len;
	int	*table_ptr;
	int	current_num;
	int	i;

	if (max <= min)
		return (0);
	range_len = max - min;
	table_ptr = (int *) malloc(range_len * sizeof(int));
	if (table_ptr == 0)
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
