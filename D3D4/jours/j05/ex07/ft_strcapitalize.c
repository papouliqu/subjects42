/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:36:56 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/11 17:43:29 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_char_alpha_num(char c)
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
	int		i;
	int		new_word;
	char	c;

	i = 0;
	new_word = 1;
	while ((c = str[i]) != '\0')
	{
		if (is_char_alpha_num(c) == 0)
			new_word = 1;
		else
		{
			if (((c >= 'a') && (c <= 'z')) && (new_word == 1))
				str[i] = c - ('a' - 'A');
			else if ((c >= '0') && (c <= '9'))
				new_word = 0;
			else if (((c >= 'A') && (c <= 'Z')) && (new_word == 0))
				str[i] = c + ('a' - 'A');
			new_word = 0;
		}
		i++;
	}
	return (str);
}
