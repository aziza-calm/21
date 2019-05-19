/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:21:09 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/19 16:55:01 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long	i;
	const char		*s;
	unsigned char	*d;
	unsigned char	ch;

	i = -1;
	s = src;
	d = dst;
	ch = c;
	while (++i < n && s[i] != ch)
		d[i] = s[i];
	if (i < n)
		return (dst + i - 1);
	return (NULL);
}
