/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 13:16:35 by oel-ouar          #+#    #+#             */
/*   Updated: 2019/10/22 22:09:31 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*a;
	int		c;

	if (!(a = malloc(count * size)))
		return (NULL);
	c = count * size;
	ft_bzero(a, c);
	return (a);
}
