/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:27:52 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/12 18:39:43 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;

	new = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new == NULL)
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s1))
		new[i] = s1[i];
	i = -1;
	while (++i < ft_strlen(s2))
		new[i + ft_strlen(s1)] = s2[i];
	new[i + ft_strlen(s1)] = '\0';
	return (new);
}
