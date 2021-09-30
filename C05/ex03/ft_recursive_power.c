/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:03:27 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/30 10:10:44 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 || nb == 1)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
