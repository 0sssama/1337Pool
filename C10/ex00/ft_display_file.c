/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:25:26 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/07 14:01:58 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	int		file_open;
	int		file_read;
	char	content[500];

	if (ac <= 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ac >= 3)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	file_open = open(av[1], O_RDONLY);
	if (file_open == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	file_read = read(file_open, content, 500);
	content[file_read] = '\0';
	printf("%d\n", file_read);
	printf("%s\n", content);
	close(file_open);
}
