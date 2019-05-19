/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 13:07:50 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/17 18:31:30 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	len;

	len = ft_strlen(dst);
	i = -1;
	while (src[++i] && i < (int)size - len - 1)
		dst[i + len] = src[i];
	dst[i + len] = '\0';
	return (len + i);
}
