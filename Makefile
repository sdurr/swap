#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/23 16:42:47 by sdurr             #+#    #+#              #
#    Updated: 2015/03/30 12:06:28 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= push_swap

SRC			= main.c \
				ft_error.c \
				ft_create_elem.c \
				test_order.c \
				test_order_reverse.c \
				test_egal.c \
				tri.c \
				tri_b.c \
				test_long.c \
				test_tri.c \
				remove_index.c \
				end_elem.c \
				push_a.c \

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
