/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:06:03 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/11 16:06:52 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_bad_arg(char *av)
{
	int i;

	i = 0;
	while (av[i])
	{
		if (av[i] == '-' && (!(av[i + 1] >= '0' && av[i + 1] <= '9')))
			return (-1);
		if ((!(av[i] >= '0' && av[i] <= '9')) && av[i] != ' ' && av[i] != '-')
			return (-1);
		i++;
	}
	return (1);
}

int		ft_error(t_list **a, t_list **b)
{
	ft_lstclear(a);
	ft_lstclear(b);
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}
