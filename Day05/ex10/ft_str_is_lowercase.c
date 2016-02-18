/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 17:18:21 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/28 17:21:14 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		x;
	int		islowercase;
	char	ch;

	x = 0;
	islowercase = 1;
	while (str[x] != '\0')
	{
		ch = str[x];
		if ((ch >= 'a') && (ch <= 'z'))
			islowercase = 1;
		else
			return (0);
		x++;
	}
	return (islowercase);
}
