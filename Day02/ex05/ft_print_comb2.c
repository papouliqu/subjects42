/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:32:16 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/03 10:16:34 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c);

void	ft_print_tab(char tb0, char tb1, char tb2, char tb3)
{
	ft_putchar(tb0 + 48);
	ft_putchar(tb1 + 48);
	ft_putchar(' ');
	ft_putchar(tb2 + 48);
	ft_putchar(tb3 + 48);
	if (!((tb0 == 9) && (tb1 == 8)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char	tb[4];

	tb[0] = 0;
	tb[1] = 0;
	tb[2] = 0;
	tb[3] = 1;
	while (!((tb[0] == 9) && (tb[1] == 9)))
	{
		ft_print_tab(tb[0], tb[1], tb[2], tb[3]);
		tb[3]++;
		if ((tb[3] = tb[3] % 10) == 0)
		{
			tb[2] = (tb[2] + 1);
		}
		if (tb[2] == 10)
		{
			tb[2] = tb[0];
			tb[1]++;
			if ((tb[1] = tb[1] % 10) == 0)
			{
				tb[0]++;
			}
			tb[3] = tb[1] + 1;
		}
	}
}
