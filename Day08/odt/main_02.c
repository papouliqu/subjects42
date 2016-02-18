/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:45:52 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/22 14:46:05 by ppouliqu         ###   ########.fr       */
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
