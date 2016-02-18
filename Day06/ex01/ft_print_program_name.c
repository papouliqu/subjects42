/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:28:08 by ppouliqu          #+#    #+#             */
/*   Updated: 2016/01/07 17:42:10 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char *name)
{
	while (*name)
		ft_putchar(*name++);
	ft_putchar('\n');
}

int		main(int argc, char *argv[])
{
	if (argc > 0)
	{
		ft_print_program_name(argv[0]);
	}
}
