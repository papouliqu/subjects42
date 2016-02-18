/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 10:24:28 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/30 12:58:23 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcmp(char *str, char *to_find);

int		main(int argc, char **argv)
{
	char	*body;
	char	*part;

	body = argv[1];
	part = argv[2];
	if (argc > 2)
	{
		printf("In the string [%s] find [%s]\n", body, part);
		printf("In the string ft_strcmp  [%s] \n", ft_strcmp(body, part));
		printf("In the string find strcmp[%d] \n", strcmp(body, part));
	}
	return (0);
}
