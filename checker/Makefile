# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 13:45:26 by ablondel          #+#    #+#              #
#    Updated: 2021/03/07 16:55:45 by ablondel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = checker.c \
ft_atoi.c \
ft_is_digit.c \
ft_dll_add_back.c \
ft_dll_add_front.c \
ft_lstclear.c \
ft_dll_new.c \
ft_lstsize.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_strcmp.c \
ft_asc.c \
ft_dsc.c \
ft_swap.c \
ft_push_data.c \
ft_rotate.c \
ft_rev_rotate.c \
ft_select_swap.c \
ft_select_push.c \
ft_select_rotate.c \
ft_select_rev_rotate.c \
ft_checked.c \
ft_error.c \
ft_format.c \
ft_next_value.c \
ft_print.c 

OBJ = ${SRC:.c=.o}

NAME = checker

$(NAME):	$(OBJ)
			gcc $(OBJ) -o $(NAME)

all:	$(NAME)

clean:	
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re