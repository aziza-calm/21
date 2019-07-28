/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 19:26:22 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/28 19:28:51 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void    free_map(char ***map, int a)
{
    int     i;
    int     j;

    i = -1;
    while (++i < a)
        free((*map)[i]);
    free(*map);
}

void    print_map(char **map, int size)
{
    int i;
    int j;

    i = -1;
    while (++i < size)
    {
        j = -1;
        while (++j < size)
            write(1, &map[i][j], 1);
        write(1, "\n", 1);
    }
}