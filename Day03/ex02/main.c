/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 18:11:30 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/03 18:45:54 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);
void	ft_putchar(char c);

int		main(void)
{
	int x;
	int y;
	int	*a = &x;
	int *b = &y;

	*a = 0;
	*b = 42;
	ft_swap(a, b);
	if (x == 42)
	{
		ft_putchar('O');
	}
	if (y == 0)
	{
		ft_putchar('Y');
	}
	return (0);
}
