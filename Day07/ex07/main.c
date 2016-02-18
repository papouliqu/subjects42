/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 16:24:59 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/14 17:49:26 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

void	**ft_print_words_tables(char **tab);

int		main(int argc, char **argv)
{
	char	**tab;
	int		i;

	i = 0;
	if (argc < 3)
	{
		printf("\nUsage Cmd STRING :\n");
		return (0);
	}
	tab = ft_split(argv[1], argv[2]);
/*	printf("\nTAB\n%s", *tab);
	printf("\nTAB2\n%s", *(tab + 1));
	printf("\nTAB3\n%s", *(tab + 2)); */
	ft_print_words_tables(tab);
	return (0);
}
