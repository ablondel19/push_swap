/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:25:04 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/25 11:08:01 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	ft_init(t_add *add)
{
	add->a = NULL;
	add->b = NULL;
	add->split = NULL;
	add->check = NULL;
	add->first = NULL;
	add->second = NULL;
	add->end_a = add->a;
	add->end_b = add->b;
	add->end_split = add->split;
	add->end_check = add->check;
	add->i = 0;
	add->ret = 0;
	add->rev_rot = 0;
	add->rot = 0;
}

int		ft_build_stack(char *av, t_add *add)
{
	if (ft_bad_arg(av) == -1)
		return (-1);
	while (av[add->i] == ' ' || av[add->i] == '\t')
		add->i++;
	while (av[add->i])
	{
		add->n = ft_atoi(&av[add->i]);
		if (add->n < -2147483648 || add->n > 2147483647)
			return (-1);
		ft_dll_add_back(&add->a, ft_dll_new(add->n), &add->end_a);
		ft_dll_add_back(&add->split, ft_dll_new(add->n), &add->end_split);
		ft_dll_add_back(&add->check, ft_dll_new(add->n), &add->end_check);
		ft_next_value(av, &add->i);
	}
	if (ft_check_doubles(add) == -1)
		return (-1);
	return (0);
}

void	ft_pop_first(t_list **searchlist)
{
	t_list *tmp;

	if (!(*searchlist))
		return ;
	tmp = (*searchlist);
	(*searchlist) = (*searchlist)->next;
	tmp->next = NULL;
	tmp->prev = NULL;
	free(tmp);
}

int		ft_min(t_add *add)
{
	t_list	*seek;
	int		n;

	if (add->b && !add->b->next)
	{
		n = add->b->data;
		seek = add->a;
		while (seek)
		{
			if (seek->data < n)
				return (-1);
			seek = seek->next;
		}
		return (1);
	}
	return (0);
}
