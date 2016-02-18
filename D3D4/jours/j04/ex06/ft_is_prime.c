/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:09:24 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/03 11:08:25 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**   NB : boucle jusau'a la racine de NB pour optimiser le temps
**   x0 = x en fin de boucle est un atifice pour provoquer la sortie de boucle
**   Une autre maniere moins compliquee est d'aller jusqu'a NB/2
*/

int		ft_is_prime(int nb)
{
	int i;
	int x;
	int x0;
	int r;

	if (nb <= 1)
		return (0);
	x = 1;
	x0 = nb;
	while (x < nb && x != x0)
	{
		x0 = x;
		x = (x + nb / x) / 2;
		r = x - x0;
		if (r == 1 || r == -1)
			x0 = x;
	}
	i = 2;
	while (i <= x)
		if (nb % i)
			i++;
		else
			return (0);
	return (1);
}
