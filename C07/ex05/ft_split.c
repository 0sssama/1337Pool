/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:38:38 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/05 12:37:13 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
char	*g_allocated_str;
int		g_i = 0;
int		g_current_word = 0;
int		g_is_new_word = 1;

char	**ft_split(char *str, char *charset)
{
	g_output = (char **) malloc(ft_ct_words(str, charset) * sizeof(char *) + 1);
	g_allocated_str = (char *) malloc(ft_strlen(str) * sizeof(char) + 1);
	if (!g_output || !g_allocated_str)
		return (0);
	while (str[g_i])
	{
		if (ft_in_charset(str[g_i], charset))
		{
			g_allocated_str[g_i] = '\0';
			g_is_new_word = 1;
		}
		else
		{
			g_allocated_str[g_i] = str[g_i];
			if (g_is_new_word)
				g_output[g_current_word++] = &g_allocated_str[g_i];
			g_is_new_word = 0;
		}
		g_i++;
	}
	g_allocated_str[g_i] = '\0';
	g_output[g_current_word] = 0;
	return (g_output);
}
