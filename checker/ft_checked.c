/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checked.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:04:19 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/07 16:05:01 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_checked_ok(t_add *add)
{
	ft_putendl_fd("OK", 1);
	ft_lstclear(&add->a);
	exit(EXIT_SUCCESS);
}

void	ft_checked_ko(t_add *add)
{
	ft_putendl_fd("KO", 1);
	ft_lstclear(&add->a);
	ft_lstclear(&add->b);
	exit(EXIT_FAILURE);
}
