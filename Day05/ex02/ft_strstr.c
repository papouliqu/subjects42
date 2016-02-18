/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 16:02:47 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/28 16:37:50 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	x;
	unsigned int	y;
	int				stop;
	char			*s;
	char			*s2;

	s = to_find;
	s2 = str;
	x = 0;
	stop = 0;
	while ((s2[x] != '\0') && (stop == 0))
	{
		y = 0;
		while ((s[y] != '\0') && (s2[x + y] != '\0') && (s[y] == s2[x + y]))
			y++;
		if (s[y] == '\0')
			if (y > 0)
				return (s2 + x);
			else
				return (s2);
		else
			x++;
	}
	return (0);
}
