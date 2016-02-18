/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:46:45 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/22 14:47:06 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

#include <stdlib.h>
#include <stdio.h>

struct s_stock_par *ft_param_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_par *par);

int		main(int argc, char **argv)
{
	struct s_stock_par *lst;

	lst = 0;
	if (argc > 0)
		lst = ft_param_to_tab(argc, argv);
	ft_show_tab(lst);
}
