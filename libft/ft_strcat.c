/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 13:11:54 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/05 12:20:13 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int len;

	len = ft_strlen(s1);
	i = -1;
	while (s2[++i])
		s1[i + len] = s2[i];
	s1[i + len] = '\0';
	return (s1);
}
