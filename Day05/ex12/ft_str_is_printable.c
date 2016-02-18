/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 17:29:10 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/28 17:31:36 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int	isprintable;

	isprintable = 1;
	while (*str != '\0')
	{
		if ((*str >= ' ') && (*str < 127))
			isprintable = 1;
		else
			return (0);
		str++;
	}
	return (isprintable);
}
