/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:36:32 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/30 11:56:00 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	if (power == 0 || nb == 1)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else
		return (nb * ft_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb)
	{
		if (ft_power(i, 2) == nb)
			return (i);
		i++;
	}
	return (0);
}
