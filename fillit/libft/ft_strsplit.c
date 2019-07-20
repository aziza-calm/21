/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:56:26 by bcharman          #+#    #+#             */
/*   Updated: 2019/06/04 11:56:49 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		i++;
	}
	(*res)[i] = '\0';
	return (ind + i);
}

static void	please_free_me(char ***res, int j)
{
	while (--j >= 0)
		free((*res)[j]);
	free(*res);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	if (!(res = (char**)malloc((1 + ft_wrdcnt(s, c)) * sizeof(char*))))
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i] && j < ft_wrdcnt(s, c))
	{
		if (s[i] != c)
		{
			if (!(res[j] = (char*)malloc((w_len(s, i, c) + 1) * sizeof(char))))
			{
				please_free_me(&res, j);
				return (NULL);
			}
			i = add_w(&res[j++], s, i, c);
		}
	}
	res[j] = NULL;
	return (res);
}
