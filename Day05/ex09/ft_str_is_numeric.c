/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 17:13:59 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/28 17:17:28 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int		x;
	int		isnumeric;

	x = 0;
	isnumeric = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= '0') && (str[x] <= '9'))
			isnumeric = 1;
		else
			return (0);
		x++;
	}
	if (x == 0)
		isnumeric = 1;
	return (isnumeric);
}
