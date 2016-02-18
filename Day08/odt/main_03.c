/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:46:22 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/22 14:46:34 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

void	print_point(t_point *point)
{
	printf("Point : x-> %d\t y-> %d\n", point->x, point->y);
}

int		main(void)
{
	t_point	point;

	set_point(&point);
	print_point(&point);

	return (0);
}
