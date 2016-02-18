/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 15:39:15 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/03 18:05:36 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_ft(int *********nbr);
void	ft_putchar(char c);

int		main(void)
{
	int	a;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	int *********nbr = &i;

	ft_ultimate_ft(nbr);
	if ((*********nbr) == 42)
	{
		ft_putchar('O');
	}
	if ( a == 42)
	{
		ft_putchar('Y');
	}
	return (0);
}
