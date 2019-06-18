/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfiprev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:08:54 by bcharman          #+#    #+#             */
/*   Updated: 2019/06/04 12:22:37 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfiprev(t_list **begin, t_list *cur)
{
	if (cur)
		while (*begin)
		{
			if ((*begin)->next == cur)
				return (*begin);
			*begin = (*begin)->next;
		}
	return (NULL);
}
