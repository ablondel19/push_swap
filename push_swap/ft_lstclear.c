/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:40:20 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/10 16:43:31 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list *node;
	t_list *next;

	node = (*lst);
	next = NULL;
	if (!node)
		return ;
	while (node->next)
	{
		next = node->next;
		node->data = 0;
		free(node);
		node = next;
	}
	node->data = 0;
	free(node);
	(*lst) = 0;
}
