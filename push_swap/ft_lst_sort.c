/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:11:54 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/11 16:14:05 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

t_list	*ft_lstsplit(t_list *head)
{
	t_list *fast;
	t_list *slow;
	t_list *tmp;

	fast = head;
	slow = head;
	while (fast->next && fast->next->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	tmp = slow->next;
	slow->next = NULL;
	return (tmp);
}

t_list	*ft_merge(t_list *first, t_list *second)
{
	if (!first)
		return (second);
	if (!second)
		return (first);
	if (first->data < second->data)
	{
		first->next = ft_merge(first->next, second);
		first->next->prev = first;
		first->prev = NULL;
		return (first);
	}
	else
	{
		second->next = ft_merge(first, second->next);
		second->next->prev = second;
		second->prev = NULL;
		return (second);
	}
}

t_list	*ft_merge_sort(t_list *head)
{
	t_list *second;

	if (!head || !head->next)
		return (head);
	second = ft_lstsplit(head);
	head = ft_merge_sort(head);
	second = ft_merge_sort(second);
	return (ft_merge(head, second));
}
