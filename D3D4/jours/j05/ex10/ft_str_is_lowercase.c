/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 19:34:15 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/11 19:34:51 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		i;
	int		lower_case;
	char	c;

	i = 0;
	lower_case = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 'a') && (c <= 'z'))
			lower_case = 1;
		else
			return (0);
		i++;
	}
	return (lower_case);
}
