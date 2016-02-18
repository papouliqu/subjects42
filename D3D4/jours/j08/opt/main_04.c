/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 19:00:50 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/21 19:36:53 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

#include <stdlib.h>
#include <stdio.h>

struct s_stock_par *ft_param_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_par *par);

int		main(int argc, char **argv)
{
	//t_stock_par *lst;
	struct s_stock_par *lst;

	lst = 0;
	if (argc > 0)
		lst = ft_param_to_tab(argc, argv);
	ft_show_tab(lst);
}
