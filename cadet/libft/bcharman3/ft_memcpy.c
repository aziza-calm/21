/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:04:29 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/19 16:12:07 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	const char	*s;
	char		*d;

	printf("%s\n", src);
	printf("%s\n", dst);
	if (src == NULL && dst == NULL)
	{
		printf("Im here!\n");
		return (dst);
	}
	i = -1;
	s = src;
	d = dst;
	while (++i < (int)n)
		d[i] = s[i];
	return (dst);
}
