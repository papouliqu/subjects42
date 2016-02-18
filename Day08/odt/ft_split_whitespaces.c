/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 20:08:36 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/21 20:16:51 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int 	ft_is_separateur(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t') || (c == '"'))
		return (1);
	else
		return (0);
}

int		ft_strcpy_y(char *dest, char *src)
{
	char *s2;
	int  stop;
	int  in_word;
	int  i;
	int  j;

	s2 = src;
	in_word = 0;
	stop = 0;
	i = 0;
	j = 0;
	if (src)
		while ((src[i] != '\0') && !stop)
		{
			if (!ft_is_separateur(src[i]))
			{
				dest[j++] = src[i];
				in_word = 1;
			}
			else
				if (in_word)
					stop = 1;
			i++;
		}
	dest[j] = '\0';
	return (i);
}

int 	ft_taille_mot(char *str)
{
	int nb;
	int stop;
	int in_word;
	int i;

	nb = 0;
	in_word = 0;
	stop = 0;
	i = 0;
	while (str && str[i] && (!stop))
	{
		if (!ft_is_separateur(str[i]))
		{
			in_word = 1;
			nb++;
		}
		else
			if (in_word)
				stop = 1;
		i++;
	}
	return (nb);
}

int 	ft_compte_mots(char *str)
{
	int nb;
	int in_word;
	int i;

	nb = 0;
	in_word = 0;
	i = 0;
	while (str && (str[i] != '\0'))
	{
		if (ft_is_separateur(str[i++]))
			in_word = 0;
		else
			if (!in_word)
			{
				in_word = 1;
				nb++;
			}
	}
	return (nb);
}

char    **ft_split_whitespaces(char *str)
{
	int  nb;
	int  i;
	int  n;
	int  j;
	char **tab;

	tab = 0;
	nb = ft_compte_mots(str);
	tab = malloc((nb + 1) * sizeof(char *));
	i = 0;
	while (i <= nb)
		tab[i++] = 0;
	tab[i] = 0;
	if (nb > 0)
	{
		i = 0;
		j = 0;
		while ((str[j] != '\0') && (i < nb))
		{
			n = ft_taille_mot(str + j);
			tab[i] = malloc((n + 1) * sizeof(char));
			j += ft_strcpy_y(tab[i], str + j);
			i++;
		}
	}
	return (tab);
}
