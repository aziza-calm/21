/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:37:01 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/05 11:05:35 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int			i;
	const char	*s1;
	const char	*s2;

	i = 0;
	s1 = str1;
	s2 = str2;
	while (i < (int)n && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
