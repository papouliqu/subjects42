/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:50:05 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/07 12:11:11 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putchar(char c);

int		main(void)
{
	int	*a;
	int *b;
	int x;
	int y;

	a = &x;
	b = &y;
	x = 75;
	y = 4;
	ft_ultimate_div_mod(a, b);
	printf("%s %d \n", "a = ", *a); 
	printf("%s %d \n", "b = ", *b);
	if (a != 0)
	{
		ft_putchar('O');
	}
	if (b == 0)
	{
		ft_putchar('Y');
	}
	return (0);
}
