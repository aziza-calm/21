/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziza <aziza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:08:40 by aziza             #+#    #+#             */
/*   Updated: 2020/01/08 17:49:16 by aziza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


void    get_width(t_out *p)
{
	if (*(p->format) > '0' && *(p->format) <= '9')
	{
		p->min_width = 1 > ft_atoi(p->format) ? 1 : ft_atoi(p->format);
		while (*p->format >= '0' && *p->format <= '9')
			p->format++;
	}
}