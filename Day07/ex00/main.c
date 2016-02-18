/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 14:42:58 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/14 14:52:43 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(int argc, char *argv[])
{
	char	*src;

	if (argc < 2)
	{
		printf("Usage is Command String\n");
		exit(-1);
	}
	printf("SRC = [%s]\n", argv[1]);
	src = ft_strdup(argv[1]);
	printf("Apres exec = [%s]\n", src);
	return (0);
}
