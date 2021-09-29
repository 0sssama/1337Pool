/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:59:20 by olabrahm          #+#    #+#             */
/*   Updated: 2021/09/29 17:05:11 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_valid(char *base)
{
	int	i;
	int	j;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
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
	int	base_len;
	int	output;
	int	negative;
	int	sl;
	int	i;

	base_len = ft_strlen(base);
	sl = ft_strlen(str);
	negative = 1;
	i = 0;
	output = 0;
	if (!ft_base_valid(base))
		return (0);
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i])
		output = (output * base_len) + ft_get_index(str[i++], base);
	return (output * negative);
}

int	main(void)
{
	/*
	char *ptr = 0;

	printf("\n");
    printf("atoi_base = %d\n", atoi("235235"));
    printf("ft_atoi_base = %d\n", ft_atoi_base("235235", "0123456789"));
    printf("atoi_base = %d\n", atoi("99999999999999999"));
    printf("ft_atoi_base = %d\n", ft_atoi_base("99999999999999999", "0123456789"));
    printf("atoi_base = %d\n", atoi("9999999999999999988888888888888888888888"));
    printf("ft_atoi_base = %d\n", ft_atoi_base("9999999999999999988888888888888888888888", "0123456789"));
    printf("atoi_base = %d\n", atoi("-9999999999999999988888888888888888888888"));
    printf("ft_atoi_base = %d\n", ft_atoi_base("-9999999999999999988888888888888888888888", "0123456789"));
    printf("atoi_base = %lu\n", strtoul("75bcd15", &ptr, 16));
    printf("ft_atoi_base = %d\n", ft_atoi_base("75bcd15", "0123456789abcdef"));
    printf("atoi_base = %lu\n", strtoul("987654", &ptr, 16));
    printf("ft_atoi_base = %d\n", ft_atoi_base("987654", "0123456789abcdef"));
    printf("atoi_base = %lu\n", strtoul("2a", &ptr, 16));
    printf("ft_atoi_base = %d\n", ft_atoi_base("2a", "0123456789abcdef"));
    printf("atoi_base = %lu\n", strtoul("ffffaa", &ptr, 16));
    printf("ft_atoi_base = %d\n\n", ft_atoi_base("ffffaa", "0123456789abcdef"));

    printf("1. ft_atoi_base = %d\n", ft_atoi_base("abcdef", "abcdef"));
    printf("2. ft_atoi_base = %d\n", ft_atoi_base("-235235", "0123456789"));
    printf("3. ft_atoi_base = %d\n", ft_atoi_base("-+2a", "0123456789abcdef"));
    printf("4. ft_atoi_base = %d\n", ft_atoi_base("+-235235", "0123456789"));
    printf("5. ft_atoi_base = %d\n", ft_atoi_base("+-2a", "0123456789abcdef"));
    printf("6. ft_atoi_base = %d\n", ft_atoi_base("-+235235", "0123456789"));
    printf("7. ft_atoi_base = %d\n", ft_atoi_base("-2a", "0123456789abcdef"));
    printf("8. ft_atoi_base = %d\n", ft_atoi_base("345.,.", "0123456789"));
    printf("9. ft_atoi_base = %d\n", ft_atoi_base("zxc", "0123456789abcdef"));
    printf("10. ft_atoi_base = %d\n", ft_atoi_base("zxc", "zxc"));
    printf("11. ft_atoi_base = %d\n", ft_atoi_base("bullshit", "zxc"));
    printf("12. ft_atoi_base = %d\n", ft_atoi_base(0, "zxd"));
    printf("13. ft_atoi_base = %d\n", ft_atoi_base("20", 0));
    printf("14. ft_atoi_base = %d\n", ft_atoi_base("235235", "0123452"));
    printf("15. ft_atoi_base = %d\n", ft_atoi_base("1000000", "01"));
    printf("16. ft_atoi_base = %d\n", ft_atoi_base("111111111", "1"));
	*/
	printf("%d\n", ft_atoi_base("0", "zxd"));
}
