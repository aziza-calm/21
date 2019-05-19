/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 19:30:55 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/12 19:32:14 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int i;
	int f;

	i = 1000000000;
	f = 1;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		f = -1;
	}
	if (nb == 0)
		ft_putchar_fd('0', fd);
	else
		while (nb / i == 0)
			i = i / 10;
	while (nb != 0)
	{
		ft_putchar_fd(48 + f * (nb / i), fd);
		nb = nb % i;
		i = i / 10;
	}
}
