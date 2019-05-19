/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 19:56:30 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/05 11:41:39 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*s;

	i = -1;
	s = (char*)malloc(ft_strlen(src) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (src[++i])
		s[i] = src[i];
	s[i] = '\0';
	return (s);
}
