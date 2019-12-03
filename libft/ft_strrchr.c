/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:32:49 by oel-ouar          #+#    #+#             */
/*   Updated: 2019/10/22 22:51:14 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	while (len && s[len] != c)
		len--;
	if (s[len] == c)
		return ((char *)s + len);
	return (0);
}
