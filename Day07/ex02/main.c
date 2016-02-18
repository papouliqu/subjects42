/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 15:17:50 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/14 18:18:39 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	myres;
	int	**range;
	int	min;
	int	max;

	if (argc < 3)
	{
		printf("\nUsage Cmd int1 int2 :\n");
		return (0);
	}
	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);
	myres = 0;
	range = NULL;
	myres = ft_ultimate_range(range, min, max);
	if (*range)
	{
		while (**range < 99999999)
		{
			printf("\n%d", **range);
			range++;
		}
	}
	printf("Taille = %d", myres);
	return (0);
}
