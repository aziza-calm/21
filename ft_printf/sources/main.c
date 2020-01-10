/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:45:31 by bcharman          #+#    #+#             */
/*   Updated: 2020/01/10 09:34:31 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"
#include <stdio.h>

void	get_flag(t_out *p)
{
	p->format++;
	if (*(p->format) == '#')
		p->sharp = 1;
	else if (*(p->format) == '-')
		p->minus = 1;
	else if (*(p->format) == '+')
		p->plus = 1;
	else if (*(p->format) == ' ')
		p->space = 1;
	else if (*(p->format) == '0')
		p->zero = 1;
	else
		return ;
	
}

void	get_type(t_out *p)
{
	p->format++;
	if (*(p->format) == 'h' && *(p->format + 1) == 'h')
		p->hh = 1;
	else if (*(p->format) == 'h')
		p->h = 1;
	else if (*(p->format) == 'l')
		p->l = 1;
	else if (*(p->format) == 'l' && *(p->format + 1) == 'l')
		p->ll = 1;
	else if (*(p->format) == 'L')
		p->L = 1;
	else
		return ;
	if (p->hh || p->ll)
		p->format += 2;
	else
		p->format++;	
}

void	specificate(t_out *p)
{
	p->format++;
	if (*(p->format) == 'c')
		convers_c(t_out *p);
	else if (*(p->format) == 's')
		convers_s(t_out *p);
	else if (*(p->format) == 'p')
		convers_p(t_out *p);
	else if (*(p->format) == 'd')
		convers_d(t_out *p);
	else if (*(p->format) == 'i')
		convers_i(t_out *p);
	else if (*(p->format) == 'o')
		convers_o(t_out *p);
	else if (*(p->format) == 'u')
		convers_u(t_out *p);
	else if (*(p->format) == 'x')
		convers_x(t_out *p);
	else if (*(p->format) == 'X')
		convers_xlarg(t_out *p);
	else
		return ;
}

void	parse_it(t_out *p)
{
	p->min_width = 0;
	p->precision = 0;
	get_flag(p);
	get_width(p);
	get_precision(p);
	get_type(p);
	specificate(p);
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
