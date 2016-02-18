/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 14:24:09 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/17 14:33:15 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int i;
	int v,r;

	i = 1;
	while (i < argc)
	{
		v = atoi(argv[i]); r = abs(v);
		printf("Value=[%s]\t ABS -> %d\t abs-> %d\n", argv[i], ABS(v), r);
		i++;
	}
}
