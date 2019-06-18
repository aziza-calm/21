/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 19:05:56 by bcharman          #+#    #+#             */
/*   Updated: 2019/06/03 18:44:11 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	d;
	int		f;

	d = 0;
	f = 1;
	while (*str && ((*str <= '\r' && *str >= '\t') || *str == ' '))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			f = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (d * 10 / 10 != d && f == -1)
			return (0);
		if (d * 10 / 10 != d && f == 1)
			return (-1);
		if (*str > '9' || *str < '0')
			return (f * d);
		d = d * 10 + (*str - '0');
		str++;
	}
	return ((int)(f * d));
}
