/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:27:52 by bcharman          #+#    #+#             */
/*   Updated: 2019/06/01 19:23:02 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		n1;
	int		n2;

	if (!s1 || !s2)
		return (NULL);
	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	if (!(new = (char*)malloc(n1 + n2 + 1)))
		return (NULL);
	i = -1;
	while (++i < n1)
		new[i] = s1[i];
	i = -1;
	while (++i < n2)
		new[i + n1] = s2[i];
	new[i + n1] = '\0';
	return (new);
}
