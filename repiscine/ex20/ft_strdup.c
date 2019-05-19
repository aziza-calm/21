/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 19:56:30 by bcharman          #+#    #+#             */
/*   Updated: 2019/04/08 17:59:39 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		n;
	char	*s;

	i = -1;
	n = 0;
	while (src[++i])
		n++;
	s = (char*)malloc(n * sizeof(char));
	i = -1;
	while (src[++i])
		s[i] = src[i];
	s[i] = '\0';
	return (s);
}
