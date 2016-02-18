/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 15:45:55 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/14 15:49:22 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	char *res;

	if (argc < 2)
	{
		printf("\nUsage Cmd INT :\n");
		return (0);
	}
	res = ft_concat_params(argc, argv);
	printf("\n%s", res);
	return (0);
}
