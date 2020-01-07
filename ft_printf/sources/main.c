/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:45:31 by bcharman          #+#    #+#             */
/*   Updated: 2020/01/07 17:53:02 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	get_flag(char *format)
{
	format++;
	if (*format == '#')
		return ('#');
	return (0);
}

int		parse_it(va_list ap, char *format)
{
	char	x;
	int		nbyte;
	char	flag;

	nbyte = 0;
	x = (char)va_arg(ap, int);
	if ((flag = get_flag(format)))
		ft_putstr("There is flag!\n");
	else
		ft_putstr("No flag\n");
	ft_putchar(x);
	return (2);
}

int		ft_printf(char *format, ...)
{
	va_list ap;
	int		nbyte;

	nbyte = 0;
	va_start(ap, format);
	while (*format)
	{
		while (*format && *format != '%')
		{
			ft_putchar(*format);
			format++;
		}
		if (*format == '%')
		{
			format += parse_it(ap, format);
		}
	}
	va_end(ap);
	return (nbyte);
}

int		main(void)
{
	ft_printf("Hello %#c%#c\n", 'u', 'y');
	return (0);
}
