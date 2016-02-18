/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 16:36:07 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/17 15:44:29 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_is_separator(char c, char *charset)
{
	int		i;

	i = 0;
	while (*(charset + i) != '\0')
	{
		if (c == *(charset + i))
			return (1);
		i++;
	}
	return (0);
}

int			ft_strcpyx(char *dest, char *src, char *charset)
{
	int	stop;
	int	in_word;
	int	i;
	int	j;

	in_word = 0;
	stop = 0;
	i = 0;
	j = 0;
	if (src)
		while ((src[i] != '\0') && !stop)
		{
			if (!ft_is_separator(src[i], charset))
			{
				dest[j++] = src[i];
				in_word = 1;
			}
			else if (in_word)
				stop = 1;
			i++;
		}
	dest[j] = '\0';
	return (i);
}

int			ft_size_word(char *str, char *charset)
{
	int	nb;
	int	stop;
	int	in_word;
	int	i;

	nb = 0;
	in_word = 0;
	stop = 0;
	i = 0;
	while (str && str[i] && (!stop))
	{
		if (!ft_is_separator(str[i], charset))
		{
			in_word = 1;
			nb++;
		}
		else if (in_word)
			stop = 1;
		i++;
	}
	return (nb);
}

int			ft_count_words(char *str, char *charset)
{
	int		nb;
	int		beg_word;
	int		i;
	int		ok;

	nb = 0;
	ok = 1;
	beg_word = 0;
	i = 0;
	while (str && (str[i] != '\0'))
	{
		ok = ft_is_separator(str[i], charset);
		if (ok)
			beg_word = 0;
		else if (!beg_word)
		{
			beg_word = 1;
			nb++;
		}
		i++;
	}
	return (nb);
}

char		**ft_split(char *str, char *charset)
{
	int		nb;
	int		i;
	int		n;
	int		j;
	char	**tab;

	tab = NULL;
	nb = ft_count_words(str, charset);
	tab = malloc((nb + 1) * sizeof(char *));
	tab[nb] = 0;
	if (nb > 0)
	{
		i = 0;
		j = 0;
		while ((str[j] != '\0') && (i < nb))
		{
			n = ft_size_word(str + j, charset);
			tab[i] = malloc((n + 1) * sizeof(char));
			j += ft_strcpyx(tab[i], str + j, charset);
			i++;
		}
	}
	return (tab);
}
