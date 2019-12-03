/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 22:12:23 by oel-ouar          #+#    #+#             */
/*   Updated: 2019/10/22 15:56:03 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_print_number(int nb, int fd)
{
	int num;
	int length;

	length = 1;
	num = nb;
	while ((num /= 10) > 0)
		length *= 10;
	num = nb;
	while (length)
	{
		ft_putchar_fd((char)((nb / length)) + '0', fd);
		nb %= length;
		length /= 10;
	}
}

void			ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	if (nb >= 0)
	{
		ft_print_number(nb, fd);
	}
	else if (nb < 0 && nb != -2147483648)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
		ft_print_number(nb, fd);
	}
}
