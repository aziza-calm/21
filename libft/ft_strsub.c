/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:22:35 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/17 18:33:04 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	new = (char*)malloc(len);
	if (new == NULL)
		return (NULL);
	i = -1;
	while (i < (int)len)
		new[i] = s[start + i];
	return (new);
}
