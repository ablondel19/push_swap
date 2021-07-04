/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dsc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:44:55 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/10 16:58:47 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int		ft_dsc(t_list *lst)
{
	int dsc;

	if (!lst)
		return (1);
	dsc = 0;
	while (lst->next)
	{
		if (lst->data > lst->next->data)
			dsc = 1;
		else
			return (-1);
		lst = lst->next;
	}
	if (dsc == 1)
		return (1);
	return (-1);
}
