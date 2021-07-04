/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:01:09 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/07 16:01:58 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_select_rotate(t_add *add)
{
	if (ft_strncmp(add->buf, "ra", 3) == 0)
		ft_rotate(&add->a, &add->end_a);
	else if (ft_strncmp(add->buf, "rb", 3) == 0)
		ft_rotate(&add->b, &add->end_b);
	else if (ft_strncmp(add->buf, "rr", 3) == 0)
	{
		ft_rotate(&add->a, &add->end_a);
		ft_rotate(&add->b, &add->end_b);
	}
}
