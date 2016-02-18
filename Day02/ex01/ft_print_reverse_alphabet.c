/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:28:53 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/11/27 09:36:43 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	c = 'z';
	while (i < 26)
	{
		ft_putchar(c);
		c--;
		i++;
	}
}
