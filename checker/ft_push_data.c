/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:54:09 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/07 15:58:42 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_push_data(t_list **src, t_list **dst)
{
	t_list *tmp;

	if (!(*src))
		return ;
	tmp = (*src);
	if ((*src)->next)
	{
		(*src) = (*src)->next;
		(*src)->prev = NULL;
	}
	else
		(*src) = NULL;
	ft_dll_add_front(dst, tmp);
}
