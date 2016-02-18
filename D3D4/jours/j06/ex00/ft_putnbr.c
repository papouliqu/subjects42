/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 20:34:34 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/10 14:49:42 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int			tab[13];
	int			compteur;
	long long	nb2;

	if (nb == 0)
		ft_putchar('0');
	nb2 = nb;
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 = -nb2;
	}
	compteur = 0;
	while (nb2 != 0)
	{
		tab[compteur] = nb2 % 10;
		compteur++;
		nb2 /= 10;
	}
	while (compteur--)
	{
		ft_putchar(tab[compteur] + '0');
	}
}
