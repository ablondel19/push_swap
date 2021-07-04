/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:25:40 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/30 10:53:22 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_init(t_add *add)
{
	add->a = NULL;
	add->b = NULL;
	add->check = NULL;
	add->end_a = add->a;
	add->end_b = add->b;
	add->end_check = add->check;
	add->i = 0;
	add->ret = 0;
}

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

int		ft_build_stack(char *av, t_add *add)
{
	if (ft_bad_arg(av) == -1)
		return (ft_error(&add->a, &add->b));
	while (av[add->i] == ' ' || av[add->i] == '\t')
		add->i++;
	while (av[add->i])
	{
		add->n = ft_atoi(&av[add->i]);
		if (add->n < -2147483648 || add->n > 2147483647)
			return (-1);
		ft_dll_add_back(&add->a, ft_dll_new(add->n), &add->end_a);
		ft_dll_add_back(&add->check, ft_dll_new(add->n), &add->end_check);
		ft_next_value(av, &add->i);
	}
	if (ft_check_doubles(add) == -1)
		return (-1);
	return (0);
}

int		main(int ac, char **av)
{
	t_add	add;

	ft_init(&add);
	if (ac == 2)
	{
		if (ft_build_stack(av[1], &add) == -1)
			return (ft_error(&add.a, &add.b));
		if (ft_asc(add.a) == 1 && add.b == NULL)
			ft_checked_ok(&add);
		while ((add.ret = read(0, add.buf, 5)) > 1)
		{
			add.buf[add.ret - 1] = '\0';
			if ((ft_format(&add) == -1) || (add.ret > 4 || add.ret <= 0))
				return (ft_error(&add.a, &add.b));
			ft_select_swap(&add);
			ft_select_push(&add);
			ft_select_rotate(&add);
			ft_select_rev_rotate(&add);
			if (ft_asc(add.a) == 1 && add.b == NULL)
				ft_checked_ok(&add);
		}
		ft_checked_ko(&add);
	}
	return (0);
}
