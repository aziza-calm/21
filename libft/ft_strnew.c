/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 16:32:00 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/12 16:40:53 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	int		i;

	s = (char*)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = -1;
	while (++i < (int)size)
		s[i] = '\0';
	return (s);
}
