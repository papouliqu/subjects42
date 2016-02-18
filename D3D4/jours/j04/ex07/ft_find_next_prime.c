/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:46:12 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/14 15:17:49 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_xxx(int nb)
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

int	ft_find_next_prime(int nb)
{
	int res;
	int stop;

	if (nb < 2)
	{
		nb = 1;
		res = 2;
	}
	stop = 0;
	while (!stop)
	{
		res = nb + 1;
		if (ft_is_prime_xxx(res))
			return (res);
		else
			nb++;
	}
	return (res);
}
