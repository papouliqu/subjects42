/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:30:43 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/30 11:26:19 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		resultat;

	i = power;
	resultat = nb;
	if (i < 0)
		return (0);
	if (i == 0)
		resultat = 1;
	if (i == 1)
		return (resultat);
	while (i != 0)
	{
		if (i > 1)
		{
			resultat = (resultat * nb);
			i--;
		}
		else if (i == 1)
		{
			resultat = resultat * 1;
			i = 0;
		}
	}
	return (resultat);
}
