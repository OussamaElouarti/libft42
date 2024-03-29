/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:46:54 by oel-ouar          #+#    #+#             */
/*   Updated: 2019/10/22 21:53:29 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str && *str != (char)c)
		str++;
	if (*str == c)
		return (str);
	return (0);
}
