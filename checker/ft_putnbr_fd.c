/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:35:19 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/04 17:27:29 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	nb;
	char	*base;

	nb = (n < 0) ? (unsigned)n * -1 : n;
	base = "0123456789";
	if (fd == -1)
		return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		write(fd, &base[nb % 10], 1);
	}
	else
		write(fd, &base[nb % 10], 1);
}
