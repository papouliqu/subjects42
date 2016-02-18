/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:25:30 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/10 16:40:45 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_separateur(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t') || (c == '"'))
		return (1);
	else
		return (0);
}

int		ft_strcpy(char *strf, char *stri)
{
	int		fin;
	int		desmots;
	int		x;
	int		y;

	desmots = 0;
	fin = 0;
	x = 0;
	y = 0;
	if (stri)
		while ((stri[x] != '\0') && !fin)
		{
			if (!ft_separateur(stri[x]))
			{
				strf[y++] = stri[x];
				desmots = 1;
			}
			else if (desmots)
				fin = 1;
			x++;
		}
	strf[y] = '\0';
	return (x);
}

int		ft_lgmot(char *str)
{
	int	nbr;
	int	fin;
	int	desmots;
	int	x;

	nbr = 0;
	desmots = 0;
	fin = 0;
	x = 0;
	while (str && str[x] && (!fin))
	{
		if (!ft_separateur(str[x]))
		{
			desmots = 1;
			nbr++;
		}
		else if (desmots)
			fin = 1;
		x++;
	}
	return (nbr);
}

int		ft_calcul_mots(char *str)
{
	int	nbr;
	int	desmots;
	int	x;

	nbr = 0;
	desmots = 0;
	x = 0;
	while (str && (str[x] != '\0'))
	{
		if (ft_separateur(str[x++]))
			desmots = 0;
		else if (!desmots)
		{
			desmots = 1;
			nbr++;
		}
	}
	return (nbr);
}

char	**ft_split_whitespaces(char *str)
{
	int		nbr;
	int		x;
	int		y;
	int		z;
	char	**tab;

	tab = 0;
	nbr = ft_calcul_mots(str);
	tab = malloc((nbr + 1) * sizeof(char *));
	tab[nbr] = 0;
	if (nbr > 0)
	{
		x = 0;
		y = 0;
		while ((str[y] != '\0') && (x < nbr))
		{
			z = ft_lgmot(str + y);
			tab[x] = malloc((z + 1) * sizeof(char));
			y += ft_strcpy(tab[x], str + y);
			x++;
		}
	}
	return (tab);
}
