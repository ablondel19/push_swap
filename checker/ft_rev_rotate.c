/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:54:40 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/07 15:58:41 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rev_rotate(t_list **lst, t_list **end)
{
	t_list *tmp;

	if (!(*lst) || !(*lst)->next)
		return ;
	tmp = (*end);
	(*end) = (*end)->prev;
	(*end)->next = NULL;
	ft_dll_add_front(lst, tmp);
}
