/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:25:33 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/30 15:50:58 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range_len;
	int	*table_ptr;
	int	current_num;
	int	i;

	range_len = max - min;
	table_ptr = malloc(4 * range_len);
	current_num = min;
	i = 0;
	if (range_len <= 0)
		return (0);
	while (current_num < max)
	{
		table_ptr[i] = current_num;
		current_num++;
		i++;
	}
	return (table_ptr);
}
