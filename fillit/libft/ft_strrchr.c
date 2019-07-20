/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 13:31:57 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/30 11:40:09 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	ch;

	ch = (unsigned char)c;
	len = ft_strlen(s) + 1;
	while (--len > -1)
		if (s[len] == ch)
			return ((char*)(s + len));
	return (NULL);
}
