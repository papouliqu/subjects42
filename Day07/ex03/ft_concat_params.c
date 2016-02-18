/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:14:26 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/14 19:34:01 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
		while (*(str + i) != '\0')
			i++;
	return (i);
}

char	*ft_strcpy(char *strf, char *stri)
{
	unsigned	i;

	i = 0;
	if (stri)
		while (*(stri + i) != 0)
		{
			*(strf + i) = *(stri + i);
			i++;
		}
	return (strf);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		nbr;
	int		i;
	char	*res;

	res = NULL;
	nbr = 0;
	i = 1;
	while (i < argc)
		nbr += ft_strlen(argv[i++]) + 1;
	res = malloc((nbr + 1) * sizeof(char));
	i = 1;
	nbr = 0;
	while (i < argc)
	{
		ft_strcpy(res + nbr, argv[i]);
		nbr += ft_strlen(argv[i]);
		if (i < argc - 1)
			*(res + nbr++) = '\n';
		i++;
	}
	*(res + nbr) = '\0';
	return (res);
}
