/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:30:54 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/11 16:48:05 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	int				stop;
	char			*t;
	char			*s;

	t = to_find;
	s = str;
	i = 0;
	stop = 0;
	while ((s[i] != '\0') && (stop == 0))
	{
		j = 0;
		while ((t[j] != '\0') && (s[i + j] != '\0') && (t[j] == s[i + j]))
			j++;
		if (t[j] == '\0')
			if (j > 0)
				return (s + i);
			else
				return (s);
		else
			i++;
	}
	return (0);
}
