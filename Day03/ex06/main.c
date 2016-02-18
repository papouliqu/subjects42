/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:50:05 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/07 12:59:44 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);

int		main(void)
{
	char	*cstr = "imon test compare un corbeau a un renard ";
	int		*lstr;
	int		*e;
	int		b;

	b = 0;
	lstr = &b;
	e = &b;
	ft_strlen(cstr);
	return (0);
}
