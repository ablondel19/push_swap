/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:44:04 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/07 14:59:00 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_print(t_list *lst)
{
	if (!lst)
	{
		printf("{NULL}\n");
		return ;
	}
	while (lst)
	{
		printf("{%lld}->", lst->data);
		lst = lst->next;
	}
	printf("{NULL}\n");
}
