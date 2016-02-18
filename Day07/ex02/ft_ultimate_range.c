/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 16:35:23 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/15 14:09:51 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	nbr;
	int	x;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	nbr = max - min;
	*range = (int *)malloc((nbr + 1) * sizeof(int));
	if (*range == (void *)0)
		return (0);
	x = 0;
	while (min < max - 1)
	{
		(*range)[x] = min;
		x++;
		min++;
	}
	(*range)[x] = '\0';
	return (x);
}
