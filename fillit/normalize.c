/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 20:33:03 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/28 19:06:06 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "./libft/libft.h"

int		get_closest_x(t_tetr *tetr)
{
	int j;
	int min;

	min = tetr->coor[0][0];
	j = 0;
	while (++j < 4)
		if (tetr->coor[j][0] < min)
				min = tetr->coor[j][0];
	return (min);
}

int		get_closest_y(t_tetr *tetr)
{
	int j;
	int min;

	min = tetr->coor[0][1];
	j = 0;
	while (++j < 4)
		if (tetr->coor[j][1] < min)
				min = tetr->coor[j][1];
	return (min);
}

int normal(t_tetr *tetr)
{
	int i;
	int x;
	int y;

	while(tetr)
	{
    	i = -1;
		x = get_closest_x(tetr);
		y = get_closest_y(tetr);
		while (++i < 4)
		{
			tetr->coor[i][0] = tetr->coor[i][0] - x;
    		tetr->coor[i][1] = tetr->coor[i][1] - y;
		}
		tetr = tetr->next;
	}
return (0);
}