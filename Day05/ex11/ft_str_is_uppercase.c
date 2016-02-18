/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 17:22:06 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/28 17:27:24 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		x;
	int		isuppercase;
	char	ch;

	x = 0;
	isuppercase = 1;
	while (str[x] != '\0')
	{
		ch = str[x];
		if ((ch >= 'A') && (ch <= 'Z'))
			isuppercase = 1;
		else
			return (0);
		x++;
	}
	return (isuppercase);
}
