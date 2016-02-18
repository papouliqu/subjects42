/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 13:39:04 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/03 13:40:31 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	res = 0;
	if (nb == 1 || nb == 0)
		res = 1;
	else if (nb > 1 && nb <= 13)
	{
		res = nb * ft_recursive_factorial(nb - 1);
	}
	return (res);
}
