/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:20:55 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/13 14:37:48 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_do_op(int (*op)(int, int), int x, int y)
{
	return ((*op)(x, y));
}
