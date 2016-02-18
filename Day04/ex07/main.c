/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 14:54:47 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/30 12:13:02 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	int		nb;

	nb = 49;
	printf("%d = %d\n", nb, ft_find_next_prime(nb));
	nb = 17;
	printf("%d = %d\n", nb, ft_find_next_prime(nb));
	nb = 19;
	printf("%d = %d\n", nb, ft_find_next_prime(nb));
	nb = 21;
	printf("%d = %d\n", nb, ft_find_next_prime(nb));
    nb = 341868;
    printf("%d = %d\n", nb, ft_find_next_prime(nb));
    nb = 245911;
    printf("%d = %d\n", nb, ft_find_next_prime(nb));
    nb = 332467;
    printf("%d = %d\n", nb, ft_find_next_prime(nb));
    nb = 297683;
    printf("%d = %d\n", nb, ft_find_next_prime(nb));
	nb = 70018;
	printf("%d = %d\n", nb, ft_find_next_prime(nb));
	nb = 238066;
    printf("%d = %d\n", nb, ft_find_next_prime(nb));
	printf("\n");
	return (0);
}
