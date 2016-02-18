/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 14:41:20 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/14 14:55:57 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#define LEN 2400

char	*ft_strdup(char *scr)
{
	int		n;
	int		a;
	char	*str;

	n = 0;
	if (scr)
		while (scr[n] != '\0')
			n++;
	a = n;
	str = (char *)malloc(sizeof(*scr) * LEN + 1);
	n = 0;
	if (scr)
		while (n < a)
		{
			str[n] = scr[n];
			n++;
		}
	str[n] = '\0';
	return (str);
}
