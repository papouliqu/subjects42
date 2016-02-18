/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:42:04 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/02 10:44:03 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		res = 0;
	else if (power > 0)
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
