/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:59:20 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/30 14:06:39 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_valid(char *base, char *str)
{
	int	i;
	int	j;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (!str || !base)
		return (0);
	if (base_len < 2 || base[0] == '+' || base[0] == '-')
		return (0);
	while (i < base_len - 1)
	{
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\r'
		|| c == '\f' || c == '\v' || c == '\n');
}

int	ft_get_index(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	output;
	int	negative;
	int	i;

	negative = 1;
	i = 0;
	output = 0;
	if (!ft_valid(base, str))
		return (0);
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] && ft_get_index(str[i], base) >= 0)
		output = (output * ft_strlen(base)) + ft_get_index(str[i++], base);
	return (output * negative);
}
