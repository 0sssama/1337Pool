/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:59:11 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/06 16:53:06 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_get_len(int size, char **strs)
{
	int	output;
	int	i;
	int	j;

	i = 0;
	j = 0;
	output = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			output++;
			j++;
		}
		j = 0;
		i++;
	}
	return (output);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_add_sep(int *i, int o_str_len, char *sep, char *output_str)
{
	int	j;

	j = 0;
	if (*i != o_str_len)
	{
		while (sep[j])
		{
			output_str[*i] = sep[j];
			j++;
			*i = *i + 1;
		}
	}
}

void	ft_fill_str(char *output_str, int o_str_len, char **strs, char *sep)
{
	int	i;
	int	wc;
	int	lc;

	i = 0;
	wc = 0;
	lc = 0;
	while (i < o_str_len)
	{
		while (strs[wc][lc])
		{
			output_str[i] = strs[wc][lc];
			i++;
			lc++;
		}
		ft_add_sep(&i, o_str_len, sep, output_str);
		wc++;
		lc = 0;
	}
	output_str[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output_str;
	int		output_str_len;

	if (size == 0)
	{
		output_str = (char *) malloc(1 * sizeof(char));
		*output_str = 0;
		return (output_str);
	}
	output_str_len = ft_get_len(size, strs) + ft_strlen(sep) * (size - 1);
	output_str = (char *) malloc(output_str_len * sizeof(char) + 1);
	if (output_str == 0)
		return (0);
	ft_fill_str(output_str, output_str_len, strs, sep);
	return (output_str);
}
