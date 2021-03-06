/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strncat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 12:27:47 by bcharman          #+#    #+#             */
/*   Updated: 2019/05/05 12:29:35 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bcharman3/libft.h"

int	main(void)
{
	char s1[10] = "123\0";
	char s2[4] = "456\0";
	printf("s1: %s\t\ts2: %s\n", s1, s2);
	printf("%s\n", ft_strncat(s1, s2, 2));
	printf("s1: %s\t\ts2: %s\n", s1, s2);
	return (0);
}
