/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:00:09 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/22 19:39:08 by bcharman         ###   ########.fr       */
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
	// while (tetr)
	// {
	// 	int j = -1;
	// 	printf("%c\n", tetr->letter);
	// 	while (++j < 4)
	// 			printf("(%c, %c)\n", tetr->coor[j][0] + '0', tetr->coor[j][1] + '0');
	// 	tetr = tetr->next;
	// 	printf("%p\n", tetr);
	// }
	printf("here\n");
	map = solve_map(tetr, k);
	printf("then here\n");
	print_map(map, ft_sqrt(k * 4));
	close(fd);
	return (0);
}
