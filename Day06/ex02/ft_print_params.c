/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:44:03 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/07 17:48:57 by ppouliqu         ###   ########.fr       */
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
	int	i;

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
