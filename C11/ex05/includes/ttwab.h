/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ttwab.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:49:20 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/09 12:24:23 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TTWAB_H
# define TTWAB_H

# include <unistd.h>

void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_op_valid(char *str);
int		addition(int a, int b);
int		subtract(int a, int b);
int		division(int a, int b);
int		multiply(int a, int b);
int		modulo(int a, int b);
void	ft_putstr(char *str);
void	ft_operate(int n1, int n2, char op);

#endif
