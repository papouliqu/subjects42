/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 15:55:26 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/14 16:00:17 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	char	**tab;
	int		i;

	i = 0;
	if (argc < 2)
	{
		printf("\nUsage Cmd String :\n");
		return (0);
	}
	tab = ft_split_whitespaces(argv[1]);
	printf("MYTAB\n%s", *tab);
	return (0);
}
