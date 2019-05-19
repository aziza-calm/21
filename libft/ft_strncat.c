/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 13:25:05 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/05 12:26:16 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int len;

	len = ft_strlen(s1);
	i = -1;
	while (s2[++i] && i < (int)n)
		s1[i + len] = s2[i];
	return (s1);
}
