/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:37:22 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/20 16:54:38 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int		ft_strlenx(char *str)
{
	int	i;

	i = 0;
	if (str)
		while (str[i] != '\0')
			i++;
	return (i);
}

char	*ft_strcpyx(char *dest, char *src)
{
	unsigned	i;

	i = 0;
	if (src)
		while (src[i] != 0)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;
	char	*dup2;

	i = ft_strlenx(src);
	dup = malloc(i + 1);
	dup2 = ft_strcpyx(dup, src);
	dup2[i] = '\0';
	return (dup2);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*lst;
	int		i;

	lst = (struct s_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	lst[ac].str = 0;
	i = 0;
	while (i < ac)
	{
		lst[i].size_param = ft_strlenx(av[i]);
		lst[i].str = av[i];
		lst[i].copy = ft_strdup(av[i]);
		lst[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	lst[i].str = 0;
	return (lst);
}
