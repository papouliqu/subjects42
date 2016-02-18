/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:13:42 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/09 15:38:36 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strrev(char *str)
{
	char	c1;
	int		n2;
	int		i;
	int		lmax;

	n2 = 0;
	i = 0;
	c1 = str[i];
	lmax = 0;
	while (c1 != '\0')
	{
		if (c1 == '\0')
		{
			c1 = str[n2 - 1];
		}
		else
		{
			c1 = str[n2];
			n2++;
			lmax = n2;
		}
	}
	c1 = str[lmax];
	while (lmax >= 0)
	{
		printf("%c", c1);
		lmax--;
		c1 = str[lmax];
	}
	return (str);
}
