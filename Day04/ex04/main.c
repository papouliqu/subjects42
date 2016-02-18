/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:24:29 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/29 16:08:45 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_fibonacci(int index);

int		main(void)
{
	int		index;

	index = -3;
	ft_fibonacci(index);
	printf("%d = %d\n", index, ft_fibonacci(index));
	index = 0;
	ft_fibonacci(index);
	printf("%d = %d\n", index, ft_fibonacci(index));
	index = 1;
	ft_fibonacci(index);
	printf("%d = %d\n", index, ft_fibonacci(index));
	index = 2;
	ft_fibonacci(index);
	printf("%d = %d\n", index, ft_fibonacci(index));
	index = 3;
	ft_fibonacci(index);
	printf("%d = %d\n", index, ft_fibonacci(index));
	index = 4;
	ft_fibonacci(index);
	printf("%d = %d\n", index, ft_fibonacci(index));
	index = 16;
	ft_fibonacci(index);
	printf("%d = %d\n", index, ft_fibonacci(index));
	index = 25;
	ft_fibonacci(index);
	printf("%d = %d\n", index, ft_fibonacci(index));
	index = 150;
	ft_fibonacci(index);
	printf("%d = %d\n", index, ft_fibonacci(index));
	return (0);
}
