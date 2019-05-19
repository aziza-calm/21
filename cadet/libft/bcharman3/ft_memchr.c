/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:39:36 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/05 11:05:53 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const char	*s1;
	void		*s2;

	s1 = s;
	s2 = (void *)s;
	i = -1;
	while (++i < (int)n)
		if (s1[i] == (unsigned char)c)
			break ;
	if (i == (int)n)
		return (NULL);
	return (s2 + i);
}
