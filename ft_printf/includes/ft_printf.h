/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 19:45:09 by vletterp          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/01/07 16:58:50 by vletterp         ###   ########.fr       */
=======
/*   Updated: 2020/01/07 17:01:25 by bcharman         ###   ########.fr       */
>>>>>>> ddf74ea3043f1cc575a78209c37d5b41578c9fb0
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

typedef struct			s_out
{
	int					plus;
	int					minus;
	int					sharp;
	int					zero;
	int					space;

	int					h;
	int					hh;
	int					l;
	int					ll;
	int					L;

	int					nbyte;
	short				flag;
	int					min_width;
	int					precision;
	va_list				ap;
	char				*format;
}                       t_out;

void    get_width(t_out *p);
#endif