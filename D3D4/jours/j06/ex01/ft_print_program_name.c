/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:18:36 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/10 19:35:24 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_program_name(char *name)
{
	while (*name)
		ft_putchar(*name++);
	ft_putchar('\n');
}

int		main(int argc, char *argv[])
{
	if (argc > 0)
	{
		ft_print_program_name(argv[0]);
	}
}
