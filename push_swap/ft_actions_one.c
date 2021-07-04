/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actions_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:13:58 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/11 18:05:33 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	ft_sa(t_add *add)
{
	if ((add->a && add->a->next) && (add->a->data > add->a->next->data))
	{
		ft_swap(&add->a, &add->b, 'A');
		write(0, "sa\n", 3);
		if (ft_asc(add->a) == 1 && add->b == NULL)
			ft_success(add);
	}
}

void	ft_pa(t_add *add)
{
	if (ft_min(add) == 1 && ft_asc(add->a) == 1)
	{
		ft_push_data(&add->b, &add->a);
		write(0, "pa\n", 3);
		if (ft_asc(add->a) == 1 && add->b == NULL)
			ft_success(add);
	}
}

void	ft_asc_and_dsc(t_add *add)
{
	if (ft_asc(add->a) == 1 && ft_dsc(add->b) == 1)
	{
		while (add->b)
		{
			ft_push_data(&add->b, &add->a);
			write(0, "pa\n", 3);
			if (ft_asc(add->a) == 1 && add->b == NULL)
				ft_success(add);
		}
	}
}

void	ft_rra_one(t_add *add)
{
	ft_rev_rotate(&add->a, &add->end_a);
	write(0, "rra\n", 4);
	if (ft_asc(add->a) == 1 && add->b == NULL)
		ft_success(add);
}

void	ft_rra_loop(t_add *add)
{
	while (add->rev_rot >= 0)
	{
		ft_rev_rotate(&add->a, &add->end_a);
		write(0, "rra\n", 4);
		if (ft_asc(add->a) == 1 && add->b == NULL)
			ft_success(add);
		add->rev_rot--;
	}
}
