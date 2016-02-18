/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 10:15:30 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/30 10:22:40 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(int argc, char **argv)
{
	char	*orig;
	char	*dest1;
	char	*dest2;
	int		lg;

	if (argc > 1)
	{
		orig = argv[1];
		dest1 = argv[2];
		lg = 0;
		printf("For Length [%d] => orig [%s] dest1[%s] \n", lg, orig, dest1);
		printf("ft_strncpy => DEST[%s]\n", ft_strncpy(dest1, orig, lg));
		printf("UNIX strncpy  dest[%s]\n", strncpy(dest1, orig, lg));
		printf("----------------------------------\n");
		dest1 = argv[2];
		lg = 5;
		printf("For Length [%d] => orig [%s] dest1[%s] \n", lg, orig, dest1);
		printf("ft_strncpy => DEST1[%s]\n", ft_strncpy(dest1, orig, lg));
		printf("UNIX strncpy  dest1[%s]\n", strncpy(dest1, orig, lg));
		printf("----------------------------------\n");
		dest2 = argv[3];
		lg = 10;
		printf("For Length [%d] => orig [%s] dest2[%s] \n", lg, orig, dest2);
		printf("ft_strncpy => DEST2[%s]\n", ft_strncpy(dest2, orig, lg));
		printf("UNIX strncpy  dest2[%s]\n", strncpy(dest2, orig, lg));
		printf("----------------------------------\n");
	}
	return (0);
}
