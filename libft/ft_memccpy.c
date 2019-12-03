/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:26:06 by oel-ouar          #+#    #+#             */
/*   Updated: 2019/10/22 21:35:59 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	unsigned char		*str1;
	unsigned const char	*str2;

	str1 = d;
	str2 = s;
	while (n)
	{
		*str1 = *str2;
		str1++;
		if (*str2 == (unsigned char)c)
			return (str1);
		str2++;
		n--;
	}
	return (0);
}
