/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 13:07:50 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/31 17:57:55 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dst);
	if (size <= len)
		return (size + ft_strlen(src));
	i = -1;
	while (src[++i] && i < size - len - 1)
		dst[i + len] = src[i];
	dst[i + len] = '\0';
	return (len + ft_strlen(src));
}
