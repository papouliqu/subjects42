/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 15:08:11 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/10 19:39:45 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_rev_params(int argcc, char *argvv[])
{
	int i;

	i = argcc - 1;
	while (i > 0)
	{
		ft_putstr(argvv[i--]);
		ft_putchar('\n');
	}
}

int		main(int argc, char *argv[])
{
	if (argc > 1)
		ft_rev_params(argc, argv);
}
