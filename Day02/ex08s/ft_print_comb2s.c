/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:32:16 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/11/27 15:52:11 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c);

void	ft_print_tab (char tb[0], char tb[1], char tb[2], char tb[3])
{
	ft_putchar(tb[0] + 48);
	ft_putchar(tb[1] + 48);
	ft_putchar(' ');
	ft_putchar(tb[2] + 48);
	ft_putchar(tb[3] + 48);
	if (!((tb[0] == 9) && (tb[1] == 8)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	tb[3]++;
}


void	ft_print_comb2(void)
{
	char	tb[4];

	tb[0] = 0;
	tb[1] = 1;
	tb[2] = 2;
	tb[3] = 3;
	while (!((tb[0] == 9) && (tb[1] == 9)))
	{
		ft_print_tab(tb[0], tb[1], tb[2], tb[3])
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
