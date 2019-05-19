/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 12:31:30 by bcharman          #+#    #+#             */
/*   Updated: 2019/02/07 14:03:04 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int extra;
	int *a;

	if (max <= min)
		return (NULL);
	a = malloc((max - min) * sizeof(int));
	i = -1;
	extra = min;
	while (++i < max - min)
	{
		a[i] = extra;
		extra++;
	}
	return (a);
}
