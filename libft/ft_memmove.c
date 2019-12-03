/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:24:11 by oel-ouar          #+#    #+#             */
/*   Updated: 2019/10/22 21:50:31 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*dest;
	const char	*src;
	char		*d;
	const char	*s;

	dest = str1;
	src = str2;
	d = dest + (n - 1);
	s = src + (n - 1);
	if (!str1 && !str2)
		return (0);
	if (d < s)
		return (ft_memcpy(dest, src, n));
	while (n--)
		*d-- = *s--;
	return (str1);
}
