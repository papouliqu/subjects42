/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:24:29 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/29 17:09:25 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_power(int nb, int power);
void	ft_putchar(char c);

int		main(void)
{
	int		nb;
	int		power;
	int		res;

	nb = 0;
	power = 0;
	res = ft_recursive_power(nb, power);
	printf("%d puissance %d : %d \n", nb, power, res);
	printf("\n"); 
	nb = 1;
	power = 0;
	res = ft_recursive_power(nb, power);
	printf("%d puissance %d : %d \n", nb, power, res);
	printf("\n"); 
	nb = 1;
	power = 10;
	res = ft_recursive_power(nb, power);
	printf("%d puissance %d : %d \n", nb, power, res);
	printf("\n"); 
	nb = 2;
	power = 5;
	res = ft_recursive_power(nb, power);
	printf("%d puissance %d : %d \n", nb, power, res);
	printf("\n"); 
	nb = -3;
	power = 3;
	res = ft_recursive_power(nb, power);
	printf("%d puissance %d : %d \n", nb, power, res);
	printf("\n"); 
	nb = -3;
	power = 4;
	res = ft_recursive_power(nb, power);
	printf("%d puissance %d : %d \n", nb, power, res);
	printf("\n"); 
	nb = -5;
	power = -3;
	res = ft_recursive_power(nb, power);
	printf("%d puissance %d : %d \n", nb, power, res);
	printf("\n"); 
	nb = 100;
	power = 0;
	res = ft_recursive_power(nb, power);
	printf("%d puissance %d : %d \n", nb, power, res);
	printf("\n"); 
	nb = 50;
	power = 20;
	res = ft_recursive_power(nb, power);
	printf("%d puissance %d : %d \n", nb, power, res);
	printf("\n"); 
	return (0);
}
