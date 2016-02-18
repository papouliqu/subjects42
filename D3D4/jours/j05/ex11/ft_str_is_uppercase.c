/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 12:33:45 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/14 12:35:04 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		i;
	int		upper_case;
	char	c;

	i = 0;
	upper_case = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 'A') && (c <= 'Z'))
			upper_case = 1;
		else
			return (0);
		i++;
	}
	return (upper_case);
}
