/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:30:43 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/29 17:20:16 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index > 130)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index == 2)
		return (1);
	else
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
}
