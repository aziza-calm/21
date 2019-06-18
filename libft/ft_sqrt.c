/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 14:28:05 by bcharman          #+#    #+#             */
/*   Updated: 2019/06/01 18:43:42 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int res;
	int i;

	if (nb == 0 || nb == 1)
		return (nb);
	i = 1;
	res = 1;
	while (res < nb)
	{
		++i;
		res = i * i;
	}
	if (res == nb)
		return (i);
	else
		return (0);
}
