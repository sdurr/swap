/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:43:46 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/27 21:42:37 by karakhirn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int main(int ac, char **av)
{
	int i;
	t_list *s;
	t_list *b;
	t_list *begin;
	t_list *begin_b;

	s = malloc(sizeof(t_list));
	s ->next = NULL;
	s->prev = NULL;
	i = 1;
	b = malloc(sizeof(t_list));
	b->next = NULL;
	b->prev = NULL;
	while (av[i])
	{
		ft_create_elem(s, ft_atoi(av[i]));
		i++;
	}
	if (!av[1])
	{
		ft_putstr_fd("Missing arguments\n", 2);
		return (0);
	}
	s = s->next;
	if (test_egal(s) == 0)
		return (0);
	if (test_order(s) == 0)
	{
		ft_putstr("Your list is already sort\n");
		return (0);
	}
	begin = s;
	while (test_order(s) == 1)
	{
		if (tri(s, b) == 3)
		{
				s = s->next;
				s->prev = NULL;
		}
		begin = s;
		s = begin;
	}

	if (b->next != NULL)
	{
		if (b)
		b = b->next;
		while (test_order_reverse(b) == 1)
		{
			tri_b(b);
			begin_b = b;
			while (b)
			{
				ft_putnbr(b->i);
				ft_putchar (' ');
				b = b->next;
			}
			ft_putstr("\n");
			b = begin_b;
		}
	}
	ft_putstr("\n pile a \n");
	if (s)
	{
		while (s)
		{
			ft_putnbr(s->i);
			ft_putchar (' ');
			s = s->next;
		}
	}

	ft_putstr("\npile b \n");
	while (b)
	{
		ft_putnbr(b->i);
		ft_putchar (' ');
		b = b->next;
	}
	(void )ac;
	return (0);
}
