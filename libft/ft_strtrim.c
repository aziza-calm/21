/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:40:33 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/12 19:12:20 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		n;
	int		i;
	int		j;
	char	*new;

	n = ft_strlen(s);
	while (s[n] == ' ' || s[n] == '\n' || s[n] == '\t')
		n--;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	new = (char*)malloc(n - i);
	if (new == NULL)
		return (NULL);
	j = 0;
	while (i < n)
	{
		new[j] = s[i];
		i++;
		j++;
	}
	return (new);
}
