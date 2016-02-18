/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 16:51:12 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/28 17:06:21 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_char_alphanum(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else if ((c >= '0') && (c <= '9'))
		return (1);
	else if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		x;
	int		newword;
	char	ch;

	x = 0;
	newword = 1;
	while ((ch = str[x]) != '\0')
	{
		if (is_char_alphanum(ch) == 0)
			newword = 1;
		else
		{
			if (((ch >= 'a') && (ch <= 'z')) && (newword == 1))
				str[x] = ch - ('a' - 'A');
			else if ((ch >= '0') && (ch <= '9'))
				newword = 0;
			else if (((ch >= 'A') && (ch <= 'Z')) && (newword == 0))
				str[x] = ch + ('a' - 'A');
			newword = 0;
		}
		x++;
	}
	return (str);
}
