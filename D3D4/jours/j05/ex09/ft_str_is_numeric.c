/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 19:19:17 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/11 19:20:05 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int	i;
	int	numeric;

	i = 0;
	numeric = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			numeric = 1;
		else
			return (0);
		i++;
	}
	if (i == 0)
		numeric = 1;
	return (numeric);
}
