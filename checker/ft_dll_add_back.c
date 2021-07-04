/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dll_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 14:13:59 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/07 15:58:33 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_dll_add_back(t_list **alst, t_list *new, t_list **end)
{
	t_list *last;

	if (*end)
	{
		(*end)->next = new;
		new->prev = (*end);
		(*end) = new;
		return ;
	}
	if (!(*alst))
	{
		ft_dll_add_front(alst, new);
		return ;
	}
	last = (*alst);
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;
	(*end) = new;
}
