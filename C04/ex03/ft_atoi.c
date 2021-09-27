/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:16:44 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/27 18:32:04 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
 *	Given a string containing only '-'s and '+'s,
 *	this function should return 1 if the number of '-'s is even,
 *	and false otherwise.
 */

int	ft_(char *str);


/*
 * Given a string containing both digits and characters,
 * this function should return the first  number until
 * reaching a character or '\0'. It should return 0
 * if the string doesn't contain a number
*/

int	ft_get_number(char *str);


/*
 * Given a string with an arbitray amount of
 * whitespace, this function should get rid
 * of it.
*/
void	ft_rm_whitespace(char *str);


/*
 * Given a string, this function should obtain
 * the first few characters containing only
 * + and -. Adding them to stirng, then passing
 * that same string to the ft_check_positivity
 * function above, returning its value.
*/
int	ft_get_positivity(char *str);


int	ft_atoi(char *str)
{
	int		output;
	int		is_negative;
	char	pos_string[];

	output = 0;
	pos_string[] = str;
	is_negative = !ft_check_positivity(pos_string);
}
