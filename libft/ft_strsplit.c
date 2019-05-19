/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:56:26 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/17 18:46:46 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	g_len(char const *s, char c)
{
	int i;
	int res;

	i = -1;
	res = 0;
	while (s[++i])
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			res++;
	return (res);
}

static int	w_len(char const *s, int ind, char c)
{
	int i;

	i = 0;
	while (s[i + ind] && s[ind + i] != c)
		i++;
	return (i);
}

static int	add_w(char **res, char const *s, int ind, char c)
{
	int i;

	i = 0;
	while (s[i + ind] && s[i + ind] != c)
	{
		(*res)[i] = s[ind + i];
		++i;
	}
	(*res)[i] = '\0';
	return (ind + i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	res = (char**)malloc((1 + g_len(s, c)) * sizeof(char*));
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			res[j] = (char*)malloc((w_len(s, i, c) + 1) * sizeof(char));
			i = add_w(&res[j++], s, i, c);
		}
	}
	res[j] = NULL;
	return (res);
}
