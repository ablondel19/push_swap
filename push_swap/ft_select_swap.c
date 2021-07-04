/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:59:25 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/10 16:43:31 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	ft_select_swap(t_add *add)
{
	if (ft_strncmp(add->buf, "sa", 3) == 0)
		ft_swap(&add->a, &add->b, 'A');
	else if (ft_strncmp(add->buf, "sb", 3) == 0)
		ft_swap(&add->a, &add->b, 'B');
	else if (ft_strncmp(add->buf, "ss", 3) == 0)
		ft_swap(&add->a, &add->b, 'X');
}
