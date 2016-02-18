/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:24:29 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/29 16:28:59 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb);

int		main(void)
{
	int		nb;

	nb = -9;
	printf("%d = %d\n", nb, ft_is_prime(nb));
    nb = 0;
    printf("%d = %d\n", nb, ft_is_prime(nb));
    nb = 1;
    printf("%d = %d\n", nb, ft_is_prime(nb));
    nb = 2;
    printf("%d = %d\n", nb, ft_is_prime(nb));
	nb = 3;
	printf("%d = %d\n", nb, ft_is_prime(nb));
	nb = 4;
	printf("%d = %d\n", nb, ft_is_prime(nb));
	nb = 12;
	printf("%d = %d\n", nb, ft_is_prime(nb));
	nb = 13;
	printf("%d = %d\n", nb, ft_is_prime(nb));
	nb = 21;
	printf("%d = %d\n", nb, ft_is_prime(nb));
	nb = 10254653;
	printf("%d = %d\n", nb, ft_is_prime(nb));
	nb = 10254655;
	printf("%d = %d\n", nb, ft_is_prime(nb));
	nb = 102546347;
	printf("%d = %d\n", nb, ft_is_prime(nb));
	nb = 2147483647;
	printf("%d = %d\n", nb, ft_is_prime(nb));
	printf("\n");
	return (0);
}
