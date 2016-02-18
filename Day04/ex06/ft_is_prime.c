/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:30:43 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/29 18:25:52 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
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
