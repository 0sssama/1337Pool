/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:16:44 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/27 19:05:55 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*	
 *	Given a string containing only '-'s and '+'s,
 *	this function should return 1 if the number of '-'s is even,
 *	and false otherwise.
 */

int		ft_check_positivity(char *str);


/*
 * Given a string containing both digits and characters,
 * this function should return the first  number(as a string)
 * until reaching a character or '\0'. It should return an empty string
 * if the string doesn't contain a number.
*/

char	*ft_get_number(char *str)
{
	int		i;
	int		j;
	char	*number;

	i = 0;
	j = 0;
	number = "";
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number[j] = str[i];
			j++;
		}
		else
			break ;
		i++;
	}
	number[j] = '\0';
	return (number);
}


/*
 * Given a string with an arbitray amount of
 * whitespace, this function should get rid
 * of it.
*/
void	ft_rm_whitespace(char *str);


/*
 * Given a string, this function should obtain
 * the first few characters containing only
 * + and -. Adding them to string, then passing
 * that same string to the ft_check_positivity
 * function above, returning its value.
 * It should also display -1 if the string doesn't
 * contain any + or - signs.
*/
int		ft_get_positivity(char *str);


int	ft_atoi(char *str)
{
	int		output;
	int		is_negative;
	int		i;
	char	*pos_string;
	char	*number;
	
	number = ft_get_number(str);
	output = 0;
	pos_string = str;
	is_negative = 0; // comment this when ft_get_positivity is created.
	// is_negative = !ft_get_positivity(pos_string);
	i = 0;
	while (number[i])
	{
		output = output * 10 + (number[i] + 48);
		i++;
	}
	if (is_negative)
		output *= -1;
	return (output);
}

int	main(void)
{
	char	*number = ft_get_number("26654x");
	printf("%s\n", number);
}
