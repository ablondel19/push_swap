/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_rev_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:01:32 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/07 16:01:57 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_select_rev_rotate(t_add *add)
{
	if (ft_strncmp(add->buf, "rra", 4) == 0)
		ft_rev_rotate(&add->a, &add->end_a);
	else if (ft_strncmp(add->buf, "rrb", 4) == 0)
		ft_rev_rotate(&add->b, &add->end_b);
	else if (ft_strncmp(add->buf, "rrr", 4) == 0)
	{
		ft_rev_rotate(&add->a, &add->end_a);
		ft_rev_rotate(&add->b, &add->end_b);
	}
}
