/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:43:46 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/31 15:20:42 by sdurr            ###   ########.fr       */
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
	int count;

	count = 0;
	s = malloc(sizeof(t_list));
	s ->next = NULL;
	s->prev = NULL;
	s->j = 0;
	i = 1;
	b = malloc(sizeof(t_list));
	b->next = NULL;
	b->prev = NULL;
	b->j = 0;
	while (av[i])
	{
		if (test_long_int_av(av[i]) == 0)
		{
			ft_putstr_fd("overflow it's not int\n", 2);
			return (0);
		}
			ft_create_elem(s, ft_atoi(av[i]));
		i++;
	}
	if (!av[1] || (av[1] && !av[2]))
	{
		ft_putstr_fd("Missing arguments\n", 2);
		return (0);
	}
	//if (test_egal(s) == 0)
	//return (0);
	if (test_order(s) == 0)
	{
		ft_putstr("Your list is already sort\n");
		return (0);
	}
	s = test_first_last(s, &count);
	begin = s;
	test_swap(s, &count);
	while (test_order(s) == 1)
	{
		if (tri(s, b, &count) == 3)
		{
				test_swap(s, &count);
				s = s->next;
				s->prev = NULL;
				begin = begin->next;
				begin->prev = NULL;
		}
		s = begin;
	}
	if (b->next != NULL)
	{
		b = b->next;
		b->prev = NULL;
		s = push_a(b, s, &count);
		b = NULL;
	}
	ft_putstr("\n pile a \n");
	while (s)
	{
			ft_putnbr(s->i);
			ft_putchar (' ');
			s = s->next;
	}
	ft_putstr("\npile b \n");
	while (b)
	{
		ft_putnbr(b->i);
		ft_putchar (' ');
		b = b->next;
	}
	ft_putnbr(count);
	(void )ac;
	return (0);
}
