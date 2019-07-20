/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 13:21:34 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/30 11:39:47 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = -1;
	ch = (char)c;
	while (s[++i])
		if (s[i] == ch)
			return ((char*)(s + i));
	if (s[i] == ch)
		return ((char*)(s + i));
	return (NULL);
}
