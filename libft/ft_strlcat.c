/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:51:52 by oel-ouar          #+#    #+#             */
/*   Updated: 2019/10/22 22:04:46 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	int		lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	while (*dst && n)
	{
		dst++;
		i++;
		n--;
	}
	while (*src && n > 1)
	{
		*dst++ = *src++;
		n--;
	}
	if (n != 0)
	{
		*dst = '\0';
	}
	return (lensrc + i);
}
