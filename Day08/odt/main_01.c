/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:45:31 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/22 14:45:39 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_boolean.h"
#include <unistd.h>

void	ft_putstr(char *str) 
{
	while (*str)
		write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{ 
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int		main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}
