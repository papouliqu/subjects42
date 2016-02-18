/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 14:57:06 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/14 15:16:27 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max);

int		ft_atoi(char *s);

int		main(int argc, char **argv)
{
	int	*myres;
	int	min;
	int max;

	if (argc < 3)
	{
		printf("\nUsage cmd Int1 int2 :\n");
		return (0);
	}
	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);
	printf("\nMIN = %d", min);
	printf("\nMAX = %d", max);
	myres = ft_range(min, max);
	if (myres)
	{
		while (*myres < 99999)
		{
			printf("\n%d", *myres);
			myres++;
		}
	}
	return (0);
}
