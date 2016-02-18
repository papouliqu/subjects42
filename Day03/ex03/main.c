/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 18:55:25 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/03 19:42:41 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_putchar(char c);

int		main(void)
{
	int	*c;
	int *e;
	int a;
	int b;

	c = &a;
	e = &b;
	a = 1500;
	b = 150;
	ft_div_mod(a, b, c, e);
	if (*c != 0)
	{
		ft_putchar('O');
	}
	if (*e == 0)
	{
		ft_putchar('Y');
	}
	return (0);
}
