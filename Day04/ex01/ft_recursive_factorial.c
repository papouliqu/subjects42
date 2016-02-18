/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:30:43 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/29 16:51:09 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
