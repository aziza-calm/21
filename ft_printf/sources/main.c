/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziza <aziza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:45:31 by bcharman          #+#    #+#             */
/*   Updated: 2020/01/08 17:53:46 by aziza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"
#include <stdio.h>

char	get_flag(t_out *p)
{
	p->format++;
	if (*(p->format) == '#')
		return ('#');
	return (0);
}

void	parse_it(t_out *p)
{
	p->flag = 0;
	p->min_width = 0;
	p->precision = 0;
	p->flag = get_flag(p);
	get_width(p);
	printf("\nWidth: %d\n", p->min_width);
}

int		ft_printf(char *format, ...)
{
	t_out p;

	p.format = format;
	p.nbyte = 0;
	va_start(p.ap, format);
	while (*p.format)
	{
		while (*p.format && *p.format != '%')
		{
			ft_putchar(*p.format);
			p.format++;
		}
		if (*p.format == '%')
		{
			parse_it(&p);
		}
	}
	va_end(p.ap);
	return (p.nbyte);
}

int		main(void)
{
	ft_printf("Hello %42c%42c\n", 'u', 'y');
	return (0);
}
