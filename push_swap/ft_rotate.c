/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:55:15 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/10 16:43:31 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	ft_rotate(t_list **lst, t_list **end)
{
	t_list *tmp;

	if (!(*lst) || !(*lst)->next)
		return ;
	tmp = (*lst);
	(*lst) = (*lst)->next;
	(*lst)->prev = NULL;
	tmp->next = NULL;
	ft_dll_add_back(lst, tmp, end);
}
