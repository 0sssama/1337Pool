/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 08:37:47 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/06 16:13:42 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_ct_words(char *str, char *charset)
{
	int	i;
	int	no_word;
	int	count;

	i = 0;
	no_word = 1;
	count = 0;
	while (str[i])
	{
		if (ft_in_charset(str[i], charset))
			no_word = 1;
		else
		{
			if (no_word)
				count++;
			no_word = 0;
		}
		i++;
	}
	return (count);
}
char	**g_output;
int		g_i = 0;
int		g_j = 0;
int		g_k;
int		g_l;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_charset_null(char *str, char *charset)
{
	char	*str_alloc;
	int		i;

	i = 0;
	if (!charset[0])
	{
		str_alloc = (char *) malloc(ft_strlen(str) * sizeof(char) + 1);
		while (str[i])
		{
			str_alloc[i] = str[i];
			i++;
		}
		str_alloc[i] = '\0';
		g_output[0] = str_alloc;
		g_output[1] = 0;
		return (1);
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	g_output = (char **) malloc(ft_ct_words(str, charset) * sizeof(char *) + 1);
	if (ft_charset_null(str, charset))
		return (g_output);
	while (ft_in_charset(str[g_i], charset))
		g_i++;
	while (g_j < ft_ct_words(str, charset))
	{
		if (ft_in_charset(str[g_i], charset))
		{
			g_i++;
			continue ;
		}
		g_k = 0;
		while (!ft_in_charset(str[g_i + g_k], charset))
			g_k++;
		g_output[g_j] = (char *) malloc(g_k * sizeof(char) + 1);
		g_l = 0;
		while (g_l < g_k)
			g_output[g_j][g_l++] = str[g_i++];
		g_output[g_j++][g_l] = '\0';
	}
	g_output[g_j] = 0;
	return (g_output);
}
