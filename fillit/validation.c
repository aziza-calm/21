/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 12:21:17 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/17 12:21:21 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int dot_num(char buf[22])
{
    int dot_num;
    int i;

    dot_num = 0;
    i = -1;
    while (buf[++i])
        if (buf[i] == '.')
            dot_num++;
    return (dot_num);
}

int hash_num(char buf[22])
{
    int hash_num;
    int i;
    
    hash_num = 0;
    i = -1;
    while (buf[++i])
        if (buf[i] == '#')
            hash_num++;
    return (hash_num);
}

int neighbour_num(char buf[22])
{
    int n;
    int i;

    n = 0;
    i = -1;
    while (buf[++i])
    {
        if (buf[i] == '#')
        {
            if (i > 4 && buf[i - 5] == '#')
                n++;
            if (i < 15 && buf[i + 5] == '#')
                n++;
            if (i % 5 != 0 && buf[i - 1] == '#')
                n++;
            if ((i + 1) % 5 != 0 && buf[i + 1] == '#')
                n++;
        }
    }
    return (n);
}

int validation(int fd)
{
    char buf[22];
    int ret;
    int k;

    k = 0;
    while ((ret = read(fd, buf, 21)))
    {
        buf[ret] = '\0';
        if ((neighbour_num(buf)) != 6 && (neighbour_num(buf)) != 8)
            return (-1);
        if ((dot_num(buf)) != 12 || (hash_num(buf)) != 4)
            return (-1);
    }
    return (0);
}