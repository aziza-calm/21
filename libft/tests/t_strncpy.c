/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 12:02:46 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/05 12:06:39 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bcharman3/libft.h"

int	main(void)
{
	char s1[4] = "123\0";
	char s2[6] = "45678\0";
	printf("s1: %s\t\ts2: %s\n", s1, s2);
	printf("%s\n", ft_strncpy(s2, s1, 5));
	printf("s1: %s\t\ts2: %s\n", s1, s2);
	return (0);
}