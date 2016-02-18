/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 14:35:16 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/17 14:48:43 by mouaret          ###   ########.fr       */
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
