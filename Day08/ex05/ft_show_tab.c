/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:03:53 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/22 19:19:38 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putnbrx(int nb)
{
	int			tab[13];
	int			cpt;
	long long	nb2;

	if (nb == 0)
		ft_putchar('0');
	else
	{
		nb2 = nb;
		if (nb2 < 0)
		{
			ft_putchar('-');
			nb2 = -nb2;
		}
		cpt = 0;
		while (nb2 != 0)
		{
			tab[cpt++] = nb2 % 10;
			nb2 /= 10;
		}
		while (cpt--)
			ft_putchar(tab[cpt] + '0');
	}
}

void	ft_putstrx(char *str)
{
	int	i;

	i = 0;
	if (str)
		while (str[i])
			ft_putchar(str[i++]);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	char	**tab;
	int		j;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstrx(par[i].str);
		ft_putchar('\n');
		ft_putnbrx(par[i].size_param);
		ft_putchar('\n');
		tab = par[i].tab;
		j = 0;
		while ((tab != 0) && (tab[j] != 0))
		{
			ft_putstrx(tab[i]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
