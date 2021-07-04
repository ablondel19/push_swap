/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:25:40 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/30 11:17:02 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int		ft_success(t_add *add)
{
	ft_lstclear(&add->a);
	ft_lstclear(&add->b);
	ft_lstclear(&add->split);
	ft_lstclear(&add->check);
	ft_lstclear(&add->first);
	ft_lstclear(&add->second);
	exit(EXIT_SUCCESS);
	return (0);
}

void	ft_end(t_add *add)
{
	if (!add->a && ft_dsc(add->b) == 1)
		ft_empty_b(add);
}

void	ft_select_action(t_add *add)
{
	if (add->rot == INT_MIN && add->rev_rot == 0)
		ft_rra_one(add);
	else if (add->rot == add->rev_rot ||
	(add->rot != INT_MIN && add->rev_rot == INT_MIN))
		ft_ra_one(add);
	else if (add->rot == INT_MIN && add->rev_rot != INT_MIN)
		ft_rra_loop(add);
	else if ((add->rot != INT_MIN && add->rev_rot != INT_MIN) &&
	(add->rot < add->rev_rot))
		ft_ra_loop(add);
	else if ((add->rot != INT_MIN && add->rev_rot != INT_MIN) &&
	(add->rev_rot < add->rot))
		ft_rra_loop(add);
}

void	ft_check(t_add *add, char *av)
{
	if (ft_build_stack(av, add) == -1)
		ft_error(add);
	if ((ft_asc(add->a) == 1 && add->b == NULL) || add->a->next == NULL)
		ft_success(add);
	add->split = ft_merge_sort(add->split);
}

int		main(int ac, char **av)
{
	t_add	add;

	ft_init(&add);
	if (ac == 2)
	{
		ft_check(&add, av[1]);
		while (add.split)
		{
			ft_sa(&add);
			ft_find_start(&add, &add.split);
			ft_find_end(&add, &add.split);
			ft_pop_first(&add.split);
			ft_select_action(&add);
			ft_pa(&add);
			ft_pb(&add);
			ft_end(&add);
			ft_sa(&add);
			ft_asc_and_dsc(&add);
		}
		ft_push_all(&add);
	}
	exit(EXIT_FAILURE);
	return (0);
}
