/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:52:43 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/02 10:05:43 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		res = 0;
	else
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
	return (res);
}
