/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:20:17 by oel-ouar          #+#    #+#             */
/*   Updated: 2019/10/23 00:04:08 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *d, const char *s, size_t n)
{
	size_t			k;
	void			*dest;

	dest = d;
	k = ft_strlen(s);
	if (n == 0)
		return (k);
	if (dest == NULL)
		return (0);
	if (n)
	{
		while (n - 1 > 0 && *s)
		{
			*(unsigned char *)dest++ = *(unsigned char *)s++;
			n--;
		}
	}
	*(unsigned char *)dest = '\0';
	return (k);
}
