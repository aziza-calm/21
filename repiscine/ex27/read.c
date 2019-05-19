/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:22:58 by bcharman          #+#    #+#             */
/*   Updated: 2019/04/10 20:47:58 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	reader(int fd)
{
	int		ret;
	char	c;

	ret = 1;
	c = '0';
	while (1)
	{
		ret = read(fd, &c, 1);
		if (ret != 0)
			write(1, &c, 1);
		else
			break ;
	}
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	reader(fd);
	close(fd);
	return (0);
}
