/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:54:33 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/10 19:27:20 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_read_write_file(char *file_name)
{
	char	buffer[29000];
	int		fd;
	int		len;
	int		newline_ct;
	int		start_index;

	fd = open(file_name, O_RDONLY);
	len = read(fd, buffer, 29000);
	newline_ct = 0;
	start_index = len - 1;
	while (newline_ct <= 10 && buffer[start_index])
	{
		if (buffer[start_index--] == '\n')
			newline_ct++;
	}
	start_index++;
	if (buffer[start_index] == '\n')
		start_index++;
	while (buffer[start_index])
		write(1, &buffer[start_index++], 1);
}

int	main(int ac, char **av)
{
	int	i;

	(void) ac;
	if (ac == 1)
	{
		write(1, "ok", 2);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			ft_putstr("==> ");
			ft_putstr(av[i]);
			ft_putstr(" <==\n");
			ft_read_write_file(av[i++]);
		}
	}
}
