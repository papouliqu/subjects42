/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:05:45 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/14 15:14:55 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define LEN 2400

int	*ft_range(int min, int max)
{
	unsigned int	nbr;
	int				*res;
	unsigned int	x;
	int				y;

	if (min >= max)
		return (0);
	nbr = max - min;
	res = malloc((nbr + 1) * sizeof(int));
	*(res + nbr) = 99999;
	y = min;
	x = 0;
	while (x < nbr)
		*(res + x++) = y++;
	return (res);
}
