/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:40:33 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/31 12:38:03 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		n;
	int		i;
	int		j;
	char	*new;

	if (!s)
		return (NULL);
	n = ft_strlen(s) - 1;
	while (n > -1 && (s[n] == ' ' || s[n] == '\n' || s[n] == '\t'))
		n--;
	i = 0;
	while (i < n && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (i == n)
		return (NULL);
	if (!(new = (char*)malloc((n - i + 2) * sizeof(char))))
		return (NULL);
	j = -1;
	while (i <= n)
		new[++j] = s[i++];
	new[++j] = '\0';
	return (new);
}
