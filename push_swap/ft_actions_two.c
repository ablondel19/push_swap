/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actions_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:16:14 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/11 18:08:28 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	ft_ra_one(t_add *add)
{
	while (add->rot > 0)
	{
		ft_rotate(&add->a, &add->end_a);
		write(0, "ra\n", 3);
		if (ft_asc(add->a) == 1 && add->b == NULL)
			ft_success(add);
		add->rot--;
	}
}

void	ft_ra_loop(t_add *add)
{
	while (add->rot > 0)
	{
		ft_rotate(&add->a, &add->end_a);
		write(0, "ra\n", 3);
		if (ft_asc(add->a) == 1 && add->b == NULL)
			ft_success(add);
		add->rot--;
	}
}

void	ft_empty_b(t_add *add)
{
	while (add->b)
	{
		ft_push_data(&add->b, &add->a);
		write(0, "pa\n", 3);
		if (ft_asc(add->a) == 1 && add->b == NULL)
			ft_success(add);
	}
}

void	ft_push_all(t_add *add)
{
	while (add->b)
	{
		ft_push_data(&add->b, &add->a);
		write(0, "pa\n", 3);
		if (ft_asc(add->a) == 1 && add->b == NULL)
			ft_success(add);
	}
}

void	ft_pb(t_add *add)
{
	ft_push_data(&add->a, &add->b);
	write(0, "pb\n", 3);
}
