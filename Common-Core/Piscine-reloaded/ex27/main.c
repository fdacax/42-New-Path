/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 21:07:08 by fedacax           #+#    #+#             */
/*   Updated: 2026/10/30 21:46:18 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	ft_display_file(int fd)
{
	char	buffer[1024];
	int		bytes_read;

	bytes_read = read(fd, buffer, 1024);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, 1024);
	}
	close(fd);
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			ft_putstr("Cannot read file.\n", 2);
		else
			ft_display_file(fd);
	}
	if (ac < 2)
		ft_putstr("File name missing.\n", 2);
	if (ac > 2)
		ft_putstr("Too many arguments.\n", 2);
	return (0);
}
