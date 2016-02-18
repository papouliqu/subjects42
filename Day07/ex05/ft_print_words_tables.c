/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 16:45:38 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/15 14:06:25 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = str[i];
	while (c != '\0')
	{
		ft_putchar(str[i]);
		i++;
		c = str[i];
	}
}

void	ft_print_words_tables(char **tab)
{
	int	x;

	if (tab)
	{
		x = 0;
		while (x >= 0)
		{
			if (tab[x] == 0)
				x = -999;
			else
			{
				ft_putstr(tab[x]);
				ft_putchar('\n');
			}
			x++;
		}
	}
}
