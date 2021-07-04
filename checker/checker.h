/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:27:01 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/25 11:07:01 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct		s_list
{
	long long		data;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

typedef struct		s_add
{
	int				i;
	long long		n;
	int				ret;
	char			buf[5];
	t_list			*end_a;
	t_list			*end_b;
	t_list			*a;
	t_list			*b;
	t_list			*check;
	t_list			*end_check;
}					t_add;

void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_isdigit(int c);
long long			ft_atoi(const char *str);
void				ft_dll_add_back(t_list **alst, t_list *new, t_list **end);
void				ft_dll_add_front(t_list **alst, t_list *new);
void				ft_lstclear(t_list **lst);
int					ft_lstsize(t_list *lst);
t_list				*ft_dll_new(int data);
void				ft_print(t_list *lst);
int					ft_asc(t_list *lst);
int					ft_dsc(t_list *lst);
int					ft_check_arg(char *av);
int					ft_strncmp(char *s1, char *s2, int n);
void				ft_swap_data(t_list *lst);
void				ft_swap(t_list **a, t_list **b, char selector);
void				ft_rotate(t_list **lst, t_list **end);
void				ft_push_data(t_list **src, t_list **dst);
void				ft_rev_rotate(t_list **lst, t_list **end);
void				ft_select_swap(t_add *add);
void				ft_select_push(t_add *add);
void				ft_select_rotate(t_add *add);
void				ft_select_rev_rotate(t_add *add);
void				ft_checked_ok(t_add *add);
void				ft_checked_ko(t_add *add);
int					ft_bad_arg(char *av);
int					ft_error(t_list **a, t_list **b);
int					ft_format(t_add *add);
void				ft_next_value(char *av, int *i);

#endif
