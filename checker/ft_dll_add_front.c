/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dll_add_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:39:48 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/06 15:35:07 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_dll_add_front(t_list **alst, t_list *new)
{
	new->next = (*alst);
	new->prev = NULL;
	if (*alst != NULL)
		(*alst)->prev = new;
	(*alst) = new;
}
