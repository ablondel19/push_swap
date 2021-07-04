/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:00:39 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/07 16:02:00 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_select_push(t_add *add)
{
	if (ft_strncmp(add->buf, "pa", 3) == 0)
		ft_push_data(&add->b, &add->a);
	else if (ft_strncmp(add->buf, "pb", 3) == 0)
		ft_push_data(&add->a, &add->b);
}
