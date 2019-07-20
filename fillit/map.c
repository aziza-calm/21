/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:17:53 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/20 19:57:21 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char **create_map(t_tetr *tetr, int a)
{
    char    **map;
    int     i;
    int     j;

    if (!(map = (char**)malloc(a * sizeof(char*))))
        return (NULL);
    i = -1;
    while (++i < a)
    {
        map[i] = (char*)malloc(a * sizeof(char));
        j = -1;
        while (++j < a)
            map[i][j] = '.';
    }
}

int		get_closest(t_tetr *tetr)
{
	int j;
	int min;
	int ind;

	min = 100000;
	j = -1;
	while (++j < 4)
		if (ft_sqrt(tetr->coor[j][0] * tetr->coor[j][0]
			+ tetr->coor[j][1] * tetr->coor[j][1]) < min)
			{
				min = ft_sqrt(tetr->coor[j][0] * tetr->coor[j][0]
					+ tetr->coor[j][1] * tetr->coor[j][1]);
				ind = j;
			}
	return (ind);
}

char **fill_map(char **map, t_tetr *tetr, int a)
{
	int x;
	int y;
	int i;
	int j;

	j = get_closest(tetr);
	y = -1;
	while (++y < a)
	{
		x = -1;
		while (++x < a)
		{
			map[y][x] = '#';
		}
	}
}
char **solve_map(t_tetr *tetr, int k)
{
    char    **map;
    int     a;

    a = ft_sqrt(k * 4);
    map = create_map(tetr, a);
    map = fill_map(map, tetr, a);
}