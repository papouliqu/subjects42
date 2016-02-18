/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:57:06 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/03 10:19:30 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		tb[13];
	int		compteur;
	long	nb2;

	if (nb == 0)
	{
		ft_putchar('0');
	}
	nb2 = nb;
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 = -nb2;
	}
	compteur = 0;
	while (nb2 != 0)
	{
		tb[compteur] = nb2 % -10;
		compteur++;
		nb2 /= 10;
	}
	while (compteur--)
	{
		ft_putchar(tb[compteur] + '0');
	}
}
