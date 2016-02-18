/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppouliqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 15:58:26 by ppouliqu          #+#    #+#             */
/*   Updated: 2015/12/28 16:01:49 by ppouliqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while ((x < n) && (src[x] != '\0'))
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
		dest[x++] = '\0';
	return (dest);
}
