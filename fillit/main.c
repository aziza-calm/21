/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:00:09 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/19 10:51:52 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(int argc, char **argv)
{
	int fd;
	int ret;
	char buf[550];

	if (argc != 2)
	{
		write(1, "usage: ./fillit <filename>\n", 27);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if ((validation(fd)) == -1)
		return (0);
	close(fd);
	return (0);
}
