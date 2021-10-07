/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 06:53:48 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/06 15:06:40 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main () {return 0;}
