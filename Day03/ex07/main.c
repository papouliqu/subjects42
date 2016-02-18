/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:10:39 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/07 15:32:47 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strrev(char *str);

int		main(void)
{
	char	*c1;
	char	*ch = "cette chaine de caracteres sera inversee svt exec fonction";
	int		a;
	int 	*e;

	a = 0;
	e = &a;
	ft_strrev(ch);
	return (0);
}
