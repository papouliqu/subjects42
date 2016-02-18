/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 10:24:28 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/30 14:47:39 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		n;

	str1 = argv[1];
	str2 = argv[2];
	n = 10;
	if (argc > 2)
	{
		printf("In the string [%s] find [%s]\n", str1, str2);
		printf("In the string ft_strncmp  [%d] \n", ft_strncmp(str1, str2, n));
		printf("In the string find strncmp[%d] \n", strncmp(str1, str2, n));
	}
	return (0);
}
