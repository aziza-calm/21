/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:22:35 by bcharman          #+#    #+#             */
/*   Updated: 2019/06/01 18:59:12 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(new = (char*)malloc(len + 1)))
		return (NULL);
	i = -1;
	while (++i < len)
		new[i] = s[start + i];
	new[i] = '\0';
	return (new);
}
