/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 08:12:51 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/26 13:43:35 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nums(int nums[], int n)
{
	int		i;
	int		not_finished;
	char	current_num;

	i = 0;
	not_finished = 0;
	while (i < n)
	{
		if (nums[i] != 10 - (n - i))
			not_finished = 1;
		current_num = '0' + nums[i];
		write(1, &current_num, 1);
		i++;
	}
	if (not_finished)
		write(1, ", ", 2);
}

int	ft_error_char(int nums[], int n)
{
	int	current_char;

	current_char = n - 1;
	while (current_char > 0)
	{
		if (nums[current_char] - nums[current_char - 1] != 1)
		{
			return (current_char - 1);
		}
		current_char--;
	}
	return (1 - 2);
}

void	ft_start(int *nums, int n)
{
	int	error_char;

	while (1 > 0)
	{
		while (nums[n - 1] <= 9)
		{
			ft_print_nums(nums, n);
			nums[n - 1]++;
		}
		error_char = ft_error_char(nums, n);
		if (error_char == 1 - 2)
			break ;
		nums[error_char]++;
		while (error_char != n - 1)
		{
			nums[error_char + 1] = nums[error_char] + 1;
			error_char++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	nums[10];
	int	i;

	i = 0;
	while (i < n)
	{
		nums[i] = i;
		i++;
	}
	ft_start(nums, n);
}
