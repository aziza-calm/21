/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 14:03:37 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/31 11:54:54 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to[0] == '\0')
		return ((char*)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (i + j < len && to[j] && str[i + j] && str[i + j] == to[j])
			j++;
		if (!to[j])
			return ((char*)(str + i));
		i++;
	}
	return (NULL);
}
