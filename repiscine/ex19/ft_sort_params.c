/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 16:31:48 by bcharman          #+#    #+#             */
/*   Updated: 2019/04/08 18:56:07 by bcharman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
}

void	ft_swap(int *s1, int *s2)
{
	int c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

void	ft_print(char **b, int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (++i < n)
	{
		j = -1;
		while (b[a[i]][++j])
			ft_putchar(b[a[i]][j]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int a[argc];

	j = 0;
	while (j++ < argc)
		a[j] = j;
	j = 0;
	while (++j < argc)
	{
		i = j;
		while (++i < argc)
			if (ft_strcmp(argv[a[j]], argv[a[i]]) == 1)
				ft_swap(&a[j], &a[i]);
	}
	ft_print(argv, a, argc);
	return (0);
}
