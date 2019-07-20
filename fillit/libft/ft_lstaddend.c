/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:22:15 by bcharman          #+#    #+#             */
/*   Updated: 2019/06/04 12:30:47 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	if (new)
		while (*alst)
		{
			if (!(*alst)->next)
			{
				(*alst)->next = new;
				new->next = NULL;
				return ;
			}
			*alst = (*alst)->next;
		}
}
