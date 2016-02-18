/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 12:57:07 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/14 13:06:20 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		print_able;

	print_able = 1;
	while (*str != '\0')
	{
		if ((*str >= ' ') && (*str < 127))
			print_able = 1;
		else
			return (0);
		str++;
	}
	return (print_able);
}
