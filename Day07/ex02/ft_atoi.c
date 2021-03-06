/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 15:30:18 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/14 15:31:52 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		n;
	int		signe;

	n = 0;
	i = 0;
	signe = 1;
	while (*(str + i) == ' ')
		i++;
	if (*(str + i) == '+' || *(str + i) == '-')
	{
		signe = (*(str + i) == '+') ? 1 : -1;
		i++;
		if (*(str + i) == '+' || *(str + i) == '-')
			return (0);
	}
	while ((*(str + i) != '\0') && (*(str + i) >= '0' && *(str + i) <= '9'))
	{
		n = 10 * n + (*(str + i) - '0');
		i++;
	}
	n = n * signe;
	return (n);
}
