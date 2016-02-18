/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 15:14:15 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/10 19:41:00 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstrmine(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (0);
}

int		ft_min_argv(int argcc, char *argvv[])
{
	char	min_str[1000];
	int		n;
	int		res;

	min_str[0] = 127;
	min_str[1] = 0;
	res = 1;
	n = 1;
	while (n < argcc)
	{
		if (ft_strcmp(min_str, argvv[n]) > 0)
		{
			ft_strcpy(min_str, argvv[n]);
			res = n;
		}
		n++;
	}
	return (res);
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = ft_min_argv(argc, argv);
			ft_putstrmine(argv[j]);
			ft_putchar('\n');
			*argv[j] = 127;
			i++;
		}
	}
}
