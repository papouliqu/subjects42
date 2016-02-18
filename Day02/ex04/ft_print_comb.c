/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:28:49 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/11/27 09:41:38 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	b1;
	char	b2;
	char	b3;

	b1 = '0' - 1;
	while (b1++ <= '9')
	{
		b2 = b1 + 1;
		while (b2 <= '9')
		{
			b3 = b2 + 1;
			while (b3 <= '9')
			{
				ft_putchar(b1);
				ft_putchar(b2);
				ft_putchar(b3++);
				if (b1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			b2++;
		}
	}
}
