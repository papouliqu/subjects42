/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:26:45 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/21 19:56:06 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

/*
** char				**ft_split_whitespaces(char *str);
*/

int					ft_strlen_x(char *str)
{
	int i;

	i = 0;
	if (str)
		while (str[i] != '\0')
			i++;
	return (i);
}

char				*ft_strcpy_x(char *dest, char *src)
{
	unsigned i;

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

char				*ft_strdup(char *src)
{
	int		i;
	char	*dup;
	char	*dup2;

	i = ft_strlen_x(src);
	dup = malloc(i + 1);
	dup2 = ft_strcpy_x(dup, src);
	dup2[i] = '\0';
	return (dup2);
}

/*
**	//lst = (struct s_stock_par *)malloc(sizeof(lst) * (ac + 1));
*/

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*lst;
	int					i;

	lst = (struct s_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	lst[ac].str = 0;
	i = 0;
	while (i < ac)
	{
		lst[i].size_param = ft_strlen_x(av[i]);
		lst[i].str = av[i];
		lst[i].copy = ft_strdup(av[i]);
		lst[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	lst[i].str = 0;
	return (lst);
}
