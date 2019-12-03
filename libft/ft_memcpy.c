/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:42:46 by oel-ouar          #+#    #+#             */
/*   Updated: 2019/10/22 21:48:30 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	const char		*str2;
	char			*str1;

	str1 = dst;
	str2 = src;
	i = 0;
	if (!str2 && !str1)
		return (0);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
