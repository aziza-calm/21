/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:29:59 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/30 17:07:10 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	if (src == dst || !len)
		return (dst);
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	if (d < s)
		return (ft_memcpy(d, s, len));
	while (--len > 0)
		d[len] = s[len];
	d[0] = s[0];
	return (dst);
}
