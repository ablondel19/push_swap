/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:49:34 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/10 16:43:31 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int		ft_format(t_add *add)
{
	if ((ft_strncmp(add->buf, "sa", 3) == 0) ||
	(ft_strncmp(add->buf, "sb", 3) == 0) ||
	(ft_strncmp(add->buf, "ss", 3) == 0) ||
	(ft_strncmp(add->buf, "pa", 3) == 0) ||
	(ft_strncmp(add->buf, "pb", 3) == 0) ||
	(ft_strncmp(add->buf, "ra", 3) == 0) ||
	(ft_strncmp(add->buf, "rb", 3) == 0) ||
	(ft_strncmp(add->buf, "rr", 3) == 0) ||
	(ft_strncmp(add->buf, "rra", 4) == 0) ||
	(ft_strncmp(add->buf, "rrb", 4) == 0) ||
	(ft_strncmp(add->buf, "rrr", 4) == 0))
		return (1);
	return (-1);
}
