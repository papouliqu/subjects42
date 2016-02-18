/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:53:12 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/07 18:01:07 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_rev_params(int argcc, char *argvv[])
{
	int	i;

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
