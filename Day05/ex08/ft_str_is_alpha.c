/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 17:07:56 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/28 17:13:11 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int	x;
	int	isalpha;

	x = 0;
	isalpha = 0;
	while (str[x] != '\0')
	{
		if (((str[x] >= 'A') && (str[x] <= 'Z')) ||
				((str[x] >= 'a') && (str[x] <= 'z')))
			isalpha = 1;
		else
			return (0);
		x++;
	}
	if (x == 0)
		isalpha = 1;
	return (isalpha);
}
