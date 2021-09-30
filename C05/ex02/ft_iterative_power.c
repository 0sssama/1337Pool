/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 08:41:16 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/30 09:54:48 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	output;

	i = 1;
	output = 1;
	if (power == 0 || nb == 1)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	while (i <= power)
	{
		output *= nb;
		i++;
	}
	return (output);
}
