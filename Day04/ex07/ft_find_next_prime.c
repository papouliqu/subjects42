/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 14:57:09 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/30 12:08:42 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime_x(int nb)
{
	int		i;
	int		j;
	int		n;
	int		resultat;

	if (nb <= 1)
		return (0);
	i = 0;
	j = 1;
	n = nb;
	while ((j < nb) && (j != n))
	{
		n = j;
		j = (j + nb / j) / 2;
		resultat = j - n;
		if (resultat == 1 || resultat == -1)
			n = j;
	}
	i = 2;
	while (i <= j)
		if (nb % i)
			i++;
		else
			return (0);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int	res;
	int stop;

	if (nb < 2)
	{
		nb = 1;
		res = 2;
	}
	stop = 0;
	while (!stop)
	{
		res = nb;
		if (ft_is_prime_x(res))
			return (res);
		else
			nb++;
	}
	return (res);
}
