/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:44:26 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/10 18:07:33 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_asc(t_list *lst)
{
	int asc;

	if (!lst || !lst->next)
		return (1);
	asc = 0;
	while (lst->next)
	{
		if (lst->data < lst->next->data)
			asc = 1;
		else
			return (-1);
		lst = lst->next;
	}
	if (asc == 1)
		return (1);
	return (-1);
}
