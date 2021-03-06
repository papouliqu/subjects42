/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:32:27 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/03 13:37:48 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb == 0)
		return (1);
	res = 0;
	if (nb > 0 && nb <= 13)
	{
		res = 1;
		while (nb > 0)
			res *= nb--;
	}
	return (res);
}
