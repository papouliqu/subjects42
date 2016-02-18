/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:24:29 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/30 11:44:58 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb);

int		main(void)
{
	int		nb;

	nb = -16;
	printf("%d = %d \n", nb, ft_sqrt(nb));
	nb = 0;
	printf("%d = %d \n", nb, ft_sqrt(nb));
	nb = 1;
	printf("%d = %d \n", nb, ft_sqrt(nb));
	nb = 2;
	printf("%d = %d \n", nb, ft_sqrt(nb));
	nb = 3;
	printf("%d = %d \n", nb, ft_sqrt(nb));
	nb = 4;
	printf("%d = %d \n", nb, ft_sqrt(nb));
	nb = 9;
	printf("%d = %d \n", nb, ft_sqrt(nb));
	nb = 16;
	printf("%d = %d \n", nb, ft_sqrt(nb));
	nb = 24;
	printf("%d = %d \n", nb, ft_sqrt(nb));
	nb = 102549124;
	printf("%i = %d \n", nb, ft_sqrt(nb));
	nb = 1703047824;
	printf("%i = %d \n", nb, ft_sqrt(nb));
	nb = 44978382;
	printf("%i = %d \n", nb, ft_sqrt(nb));
    nb = 508998721;
	printf("%i = %d \n", nb, ft_sqrt(nb));
	nb = 631868769;
	printf("%i = %d \n", nb, ft_sqrt(nb));
	nb = 1111288896;
	printf("%i = %d \n", nb, ft_sqrt(nb));
	nb = 94737617;
	printf("%i = %d \n", nb, ft_sqrt(nb));
	nb = 631868769;
	printf("%i = %d \n", nb, ft_sqrt(nb));
	printf("\n");
	return (0);
}
