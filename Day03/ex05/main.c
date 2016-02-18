/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:24:29 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/07 12:31:00 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

int		main(void)
{
	char	*ch = " T0 - test0 ...'12345 - 67890 : ;";
	char	*istr = " T1 - test1 ,,,';";
	char	c;
	int		b;
	int		*e;

	b = 0;
	e = &b;
	ft_putstr(istr);
	c = '\n';
	ft_putchar(c);
	ft_putchar(c);
	istr = ch;
	ft_putstr(istr);
	return (0);
}
