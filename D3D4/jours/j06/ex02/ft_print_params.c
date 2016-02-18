/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:55:08 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/10 19:38:39 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstrmine(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_params(int argcc, char *argvv[])
{
	int i;

	i = 1;
	while (i < argcc)
	{
		ft_putstrmine(argvv[i++]);
		ft_putchar('\n');
	}
}

int		main(int argc, char *argv[])
{
	if (argc > 1)
		ft_print_params(argc, argv);
}
