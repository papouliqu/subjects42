/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:30:43 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/29 16:43:16 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		somme;
	int		nb1;

	i = 1;
	nb1 = nb;
	somme = 1;
	if (nb1 < 0)
		return (0);
	if (nb1 > 12)
		return (0);
	while (nb1 != 0)
	{
		somme = (somme * nb1);
		nb1--;
		i++;
	}
	return (somme);
}
