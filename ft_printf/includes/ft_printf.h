/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziza <aziza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 19:45:09 by vletterp          #+#    #+#             */
/*   Updated: 2020/01/08 17:49:50 by aziza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

typedef struct			s_out
{
	int					nbyte;
	short				flag;
	int					min_width;
	int					precision;
	va_list				ap;
	char				*format;
}                       t_out;

void    get_width(t_out *p);
#endif
