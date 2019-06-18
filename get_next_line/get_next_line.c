/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:23:40 by bcharman          #+#    #+#             */
/*   Updated: 2019/06/13 11:32:23 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*get_list(t_list **file, int fd)
{
	t_list	*lst;

	lst = *file;
	while (lst)
	{
		if ((int)lst->content_size == fd)
			return (lst);
		lst = lst->next;
	}
	lst = ft_lstnew("\0", fd);
	ft_lstadd(file, lst);
	lst = *file;
	return (lst);
}

static int		write_content(int fd, int ret, t_list **cur, char *buf)
{
	while (ret)
	{
		buf[ret] = '\0';
		if (!((*cur)->content = ft_strjoin((*cur)->content, buf)))
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
		ret = read(fd, buf, BUFF_SIZE);
	}
	if (ret < BUFF_SIZE && !ft_strlen((*cur)->content))
		return (0);
	return (ret);
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];
	int				i;
	static t_list	*file;
	t_list			*cur;

	if (fd < 0 || !line || (ret = read(fd, buf, BUFF_SIZE)) < 0)
		return (-1);
	cur = get_list(&file, fd);
	ret = write_content(fd, ret, &cur, buf);
	i = -1;
	ret = (int)ft_strlen(cur->content) + 1;
	if (!(*line = ft_strnew(ret)))
		return (-1);
	while (++i < ret && ((char*)cur->content)[i] != '\n')
		(*line)[i] = ((char*)cur->content)[i];
	(*line)[i] = '\0';
	if (i < (int)ft_strlen(cur->content))
		cur->content = cur->content + i + 1;
	else
		ft_strclr(cur->content);
	if (!(ft_strlen(*line)) && i == 0)
		return (0);
	return (1);
}
