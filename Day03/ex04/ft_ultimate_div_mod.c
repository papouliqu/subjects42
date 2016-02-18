/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:53:19 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/07 12:15:59 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int *res;
	int	*cal;
	int	g;
	int	h;

	res = &g;
	cal = &h;
	g = 0;
	h = 0;
	*res = *a;
	if (b != 0)
	{
		*cal = (*res / *b);
		*b = (*a % *b);
		*a = *cal;
	}
}
