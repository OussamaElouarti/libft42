/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:18:28 by oel-ouar          #+#    #+#             */
/*   Updated: 2019/10/09 15:26:15 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int n)
{
	if (n > 31 && n < 127)
		return (1);
	return (0);
}