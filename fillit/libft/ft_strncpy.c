/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:08:19 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/30 11:24:19 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	i = -1;
	while (++i < len)
		if (i < srclen + 1)
			dst[i] = src[i];
		else
			dst[i] = '\0';
	return (dst);
}
