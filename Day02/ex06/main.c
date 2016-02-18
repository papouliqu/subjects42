/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:52:51 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/11/27 14:49:18 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
char	ft_putchar(char c);

int		main(void)
{
	int	m;

	m = 42;
	ft_putnbr(m);
	ft_putchar('\n');
	m = 0;
	ft_putnbr(m);
	ft_putchar('\n');
	m = -1;
	ft_putnbr(m);
	ft_putchar('\n');
	m = 2345678901;
	ft_putnbr(m);
	ft_putchar('\n');
	m--;
	ft_putnbr(m);
	ft_putchar('\n');
	m = -m;
	ft_putnbr(m);
	ft_putchar('\n');
	return (0);
}
