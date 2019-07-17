/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:00:09 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/16 18:18:12 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(int argc, char **argv)
{
	int fd;
	int ret;

	if (argc != 2)
	{
		write(1, "usage: ./fillit <filename>\n", 27);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	// Проверка на случай, если в файле больше 26 фигур
	if ((ret = read(fd, NULL, 600)) > 545 || ret == -1)
    	return (0);
	close(fd); // т к прочли весь файл, нужно его закрыть и снова открыть
	fd = open(argv[1], O_RDONLY);
	if ((validation(fd)) == -1) // валидация
		printf("Invalid input or couldn't read file\n");
	//normalization(fd); //нормализация (перемещаем фигуры выше и левее)
	close(fd);
	return (0);
}
