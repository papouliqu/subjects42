/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 10:34:31 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/17 15:24:51 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int		lstr;
	char	c;
	char	*ivar;
	int		i;

	ivar = &c;
	lstr = 0;
	i = 0;
	c = str[i];
	while (c != '\0')
	{
		c = str[i];
		if (c != '\0')
		{
			i++;
		}
	}
	lstr = i;
	return (lstr);
}
