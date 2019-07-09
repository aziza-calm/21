/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:23:40 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/09 18:33:45 by bcharman         ###   ########.fr       */
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
	return (*file);
}

static int		write_content(int fd, t_list **cur, char *buf)
{
	int ret;

	ret = 0;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if (!((*cur)->content = ft_strjoin_free((*cur)->content, buf)))
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (!ft_strlen((*cur)->content))
		return (0);
	return (ret);
}

static int		write_line(char ***line, t_list **cur, int i)
{
	int	size;

	size = (int)ft_strlen((*cur)->content);
	if (!(**line = ft_strnew(size)))
		return (-1);
	while (++i < size && ((char*)(*cur)->content)[i] != '\n')
		(**line)[i] = ((char*)(*cur)->content)[i];
	(**line)[i] = '\0';
	return (i);
}

static void		free_fd(t_list **list, t_list **cur)
{
	if (*cur)
	{
		if (((*list) = ft_lstfiprev(list, *cur)))
			(*list)->next = (*cur)->next;
		free((*cur)->content);
		free(*cur);
	}
}

int				get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				i;
	static t_list	*file;
	t_list			*cur;
	int				check;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	cur = get_list(&file, fd);
	check = write_content(fd, &cur, buf);
	i = -1;
	if ((i = write_line(&line, &cur, i)) == -1)
		return (-1);
	if (!(ft_strlen(*line)) && !check)
	{
		free_fd(&file, &cur);
		return (0);
	}
	if (i < (int)ft_strlen(cur->content) - 1)
		cur->content = ft_rewritestr((char**)&(cur->content), i + 1);
	else
		ft_strclr(cur->content);
	return (1);
}
