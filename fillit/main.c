/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:00:09 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/28 20:39:04 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "./libft/libft.h"

int main(int argc, char **argv)
{
	int		fd;
	int		k;
	t_tetr	*tetr;
	char	**map;

	if (argc != 2)
	{
		write(1, "usage: ./fillit <filename>\n", 27);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if ((validation(fd, &k)) == -1)
		return (0);
	close(fd);
	fd = open(argv[1], O_RDONLY);
	tetr = reading(fd);
	printf("here\n");
	while (tetr)
	{
		printf("this is letter %c\n", tetr->letter);
		int j = -1;
		while (++j < k)
			printf("(%d, %d)\n", tetr->coor[j][0] + '0', tetr->coor[j][1] + '0');
		tetr = tetr->next;
	}
	// normal(tetr);
	// map = solve_map(tetr, &k);
	// print_map(map, k);
	close(fd);
	return (0);
}
