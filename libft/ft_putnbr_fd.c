/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 19:30:55 by bcharman          #+#    #+#             */
/*   Updated: 2019/06/01 17:43:46 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long int i;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		i = (long int)nb * (-1);
	}
	else
		i = (long int)nb;
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd('0' + i % 10, fd);
}
