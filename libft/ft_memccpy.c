/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:21:09 by bcharman          #+#    #+#             */
/*   Updated: 2019/06/03 21:37:15 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	ch;

	if (n == 0)
		return (NULL);
	i = -1;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	ch = (unsigned char)c;
	while (++i < n && s[i] != ch)
		d[i] = s[i];
	if (i < n)
	{
		d[i] = s[i];
		return (d + i + 1);
	}
	return (NULL);
}
