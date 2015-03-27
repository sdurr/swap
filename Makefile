#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/23 16:42:47 by sdurr             #+#    #+#              #
#    Updated: 2015/02/25 15:13:45 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= push_swap

SRC			= main.c \
				ft_error.c \

OBJ			= $(SRC:.c=.o)

CC			= /usr/bin/gcc

CFLAGS		= -Wall -Wextra -Werror


RM			= /bin/rm -f

ECHO			= /bin/echo -e

PATHLIB    = -I libft/includes

$(NAME)	:		$(OBJ)
				Make -C libft/
				@$(ECHO) '> LIB Compiled'
				@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L libft/ -lft
				@$(ECHO) '> Compiled'

clean	:
				Make -C libft/ fclean
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
