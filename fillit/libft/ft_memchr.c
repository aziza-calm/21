/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:39:36 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/30 11:19:40 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	ch;

	s1 = (unsigned char*)s;
	ch = (unsigned char)c;
	i = -1;
	while (++i < n)
		if (s1[i] == ch)
			break ;
	if (i == n)
		return (NULL);
	return ((void*)s1 + i);
}
