#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/23 16:42:47 by sdurr             #+#    #+#              #
#    Updated: 2015/04/02 13:31:06 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= push_swap

SRC			= main.c \
				ft_error.c \
				ft_create_elem.c \
				test_order.c \
				test_order_reverse.c \
				test_egal.c \
				test_long.c \
				test_tri.c \
				remove_index.c \
				end_elem.c \
				push_a.c \
				test_first_last.c \
				test_long_int_av.c \
				test_swap.c \
				test.c \
				test_rr.c \
				algo_tri.c \
				rotate_revers.c \
				push_b.c \
				rotate.c \
				swap.c \

OBJ			= $(SRC:.c=.o)

CC			= /usr/bin/gcc

CFLAGS		= -Wall -Wextra -Werror


RM			= /bin/rm -f

ECHO			= /bin/echo -e

PATHLIB    = -I libft/includes

$(NAME)	:		$(OBJ)
				@$(ECHO) '> LIB Compiled'
				@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L libft/ -lft
				@$(ECHO) '> Compiled'

clean	:
				-@$(RM) $(OBJ)
				-@$(RM) *~
				@$(ECHO) '> Directory cleaned'

all		:		$(NAME)

fclean	:		clean
				-@$(RM) $(NAME)
				@$(ECHO) '> Remove executable'

re		:		fclean all

.PHONY	:		all clean re

debug	:		$(OBJ)
				@$(CC) $(INC) $(CDEBUG) -o $(NAME) $(OBJ)
				@$(ECHO) '> Mode Debug: done'

.c.o	:
				$(CC) $(CFLAGS) $(PATHLIB) -o $@ -c $<
