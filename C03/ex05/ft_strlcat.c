/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:02:01 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/28 14:44:21 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	j;
	unsigned int	output;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	output = src_length + ft_min(size, dest_length);
	if (src_length == 0 || size == 0)
		return (output);
	j = dest_length;
	i = 0;
	while (src[i] && dest_length + i < size - 1)
	{
		dest[dest_length + i] = src[i];
		i++;
		j++;
	}
	dest[dest_length + i] = '\0';
	return (output);
}
