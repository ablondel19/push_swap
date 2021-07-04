/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:55:44 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/07 17:01:11 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_swap_data(t_list *lst)
{
	int tmp;

	tmp = lst->data;
	lst->data = lst->next->data;
	lst->next->data = tmp;
}

void	ft_swap(t_list **a, t_list **b, char selector)
{
	if (selector == 'A' && (*a) && (*a)->next)
		ft_swap_data(*a);
	else if (selector == 'B' && (*b) && (*b)->next)
		ft_swap_data(*b);
	else if (selector == 'X')
	{
		if ((*a) && (*a)->next)
			ft_swap_data(*a);
		if ((*b) && (*b)->next)
			ft_swap_data(*b);
	}
}
