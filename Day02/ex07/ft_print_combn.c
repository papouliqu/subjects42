/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:54:40 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/03 11:47:56 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_tab(int dgt[9], int dim)
{
	int	i;

	i = 0;
	while (i < dim)
	{
		ft_putchar(dgt[i] + '0');
		i = i + 1;
	}
}

int		ft_incr(int dgt[9], int dim)
{
	int		i;
	int		j;

	i = dim - 1;
	j = -1;
	while ((i >= 0) && (j == -1))
	{
		if (dgt[i] == (10 - dim + i))
			i = i - 1;
		else
		{
			dgt[i] = dgt[i] + 1;
			j = i + 1;
			while (j < dim)
			{
				dgt[j] = dgt[j - 1] + 1;
				j = j + 1;
			}
		}
		return (j);
	}
}

int		ft_print_combn(int dim)
{
	int		dgt[9];
	int		i;

	if ((dim >= 1) && (dim <= 9))
	{
		i = 0;
		while (i < dim)
		{
			dgt[i] = i;
			i = i + 1;
		}
		while (i > 0)
		{
			ft_print_tab(dgt, dim);
			i = ft_incr(dgt, dim);
			if (i >= 0)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		ft_putchar('\n');
	}
}
