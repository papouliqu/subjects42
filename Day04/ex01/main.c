/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:24:29 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/29 16:48:38 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_factorial(int nb);
void	ft_putchar(char c);

int		main(void)
{
	int		nb;
	int		res;

	nb = -5;
	res = ft_recursive_factorial(nb);
	printf("%d factoriel %8u\n", nb, res);
	printf("\n");
	nb = 0;
	res = ft_recursive_factorial(nb);
	printf("%8u factoriel %8u\n", nb, res);
	printf("\n"); 
	nb = 1;
	res = ft_recursive_factorial(nb);
	printf("%8u factoriel %8u\n", nb, res);
	printf("\n"); 
	nb = 2;
	res = ft_recursive_factorial(nb);
	printf("%8u factoriel %8u\n", nb, res);
	printf("\n"); 
	nb = 3;
	res = ft_recursive_factorial(nb);
	printf("%8u factoriel %8u\n", nb, res);
	printf("\n"); 
	nb = 6;
	res = ft_recursive_factorial(nb);
	printf("%8u factoriel %8u\n", nb, res);
	printf("\n"); 
	nb = 12;
	res = ft_recursive_factorial(nb);
	printf("%8u factoriel %8u\n", nb, res);
	printf("\n"); 
	nb = 13;
	res = ft_recursive_factorial(nb);
	printf("%8u factoriel %8u\n", nb, res);
	printf("\n"); 
	return (0);
}
