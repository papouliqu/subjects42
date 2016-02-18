/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 18:03:50 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/07 18:25:08 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2);

void	ft_putstrmine(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

char	*ft_strcpy(char *strf, char *strd)
{
	unsigned	i;

	i = -1;
	while (strd[++i])
		strf[i] = strd[i];
	strf[i] = '\0';
	return (strf);
}

int		ft_min_argv(int argcc, char *argvv[])
{
	char	min_str[500];
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
	int	i;
	int	j;

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
