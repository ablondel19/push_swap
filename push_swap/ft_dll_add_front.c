/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dll_add_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:39:48 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/10 16:43:31 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	ft_dll_add_front(t_list **alst, t_list *new)
{
	new->next = (*alst);
	new->prev = NULL;
	if (*alst != NULL)
		(*alst)->prev = new;
	(*alst) = new;
}
