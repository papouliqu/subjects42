/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:11:17 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/21 20:40:25 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr_x(int nb)
{
	int			tab[13];
	int			compteur;
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
		compteur = 0;
		while (nb2 != 0)
		{
			tab[compteur++] = nb2 % 10;
			nb2 /= 10;
		}
		while (compteur--)
			ft_putchar(tab[compteur] + '0');
	}
}

void	ft_putstr_x(char *str)
{
	int i;

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
		ft_putstr_x(par[i].str);
		ft_putchar('\n');
		ft_putnbr_x(par[i].size_param);
		ft_putchar('\n');
		tab = par[i].tab;
		j = 0;
		while ((tab != 0) && (tab[j] != 0))
		{
			ft_putstr_x(tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
