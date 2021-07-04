/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:17:24 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/11 16:28:28 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	ft_find_end(t_add *add, t_list **split)
{
	t_list *seek;

	add->rev_rot = INT_MIN;
	seek = add->end_a;
	add->end = 0;
	add->middle = ft_lstsize(add->a) / 2;
	if (add->middle % 2 != 0)
		add->middle++;
	if (seek->data == (*split)->data)
	{
		add->rev_rot = 0;
		return ;
	}
	while (add->end < add->middle)
	{
		add->end++;
		seek = seek->prev;
		if (seek->data == (*split)->data)
		{
			add->rev_rot = add->end;
			return ;
		}
	}
}

void	ft_find_start(t_add *add, t_list **split)
{
	t_list *seek;

	add->rot = INT_MIN;
	seek = add->a;
	add->start = 0;
	add->middle = ft_lstsize(add->a) / 2;
	if (add->middle % 2 != 0)
		add->middle--;
	if (seek->data == (*split)->data)
	{
		add->rot = 0;
		return ;
	}
	while (add->start <= add->middle)
	{
		++add->start;
		seek = seek->next;
		if (seek->data == (*split)->data)
		{
			add->rot = add->start;
			return ;
		}
	}
}
