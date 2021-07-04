/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_doubles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:15:49 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/11 16:28:30 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int		ft_check_doubles(t_add *add)
{
	int n;
	int db;

	if (!add->check || !add->check->next)
		return (1);
	n = (add->check->data);
	db = 0;
	while (add->check)
	{
		if (add->check->data == n)
			db++;
		add->check = add->check->next;
	}
	if (db > 1)
		return (-1);
	return (1);
}
