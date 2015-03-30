/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 10:23:43 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/27 22:03:13 by karakhirn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include <stdlib.h>
#include "libft.h"

int		push_b(t_list *s, t_list *b)
{
	if (s)
	{
		ft_create_elem(b, s->i);
		ft_putstr("pb ");
	}
	return (0);
}

int		test_first_more(t_list *s, t_list *b)
{
	t_list *begin;

	begin = s;
	if (b)
		ft_putstr("");
	while (s->next != NULL)
	{
		if (begin->i < s->i)
		{
			s = begin;
			return (0);
		}		
		s = s->next;
	}
	if (begin->i < s->i)
	{
		s = begin;
		return (0);
		}
	s = begin;
	if (test_long(s, b) == 0)
	{
		push_b(s, b);
		s = s->next;
		return (1);
	}
	return (0);
}

int	rotate_a(t_list *s)
{
	t_list *begin;
	int tmp_first;
	t_list *next;

	tmp_first = s->i;
	begin = s;
	next = s;
	if (next)
		next = next->next;
	while (s->next != NULL)
	{
		s->i = next->i;
		s = s->next;
		next = next->next;
	}
	s->i = tmp_first;
	s = begin;
	ft_putstr("ra ");
	return (0);
}

int		tri(t_list *s, t_list *b)
{
	t_list *second;
	t_list *begin;
	int tmp;

	second = s;
	second = second->next;
	if (test_first_more(s, b) == 1)
	{	
		s = s->next;
		s->prev = NULL;
		return (3);
	}	
	begin = s;
	s = begin;
	if (s->i > second->i)
	{
		tmp = s->i;
		s->i = second->i;
		s = s->next;
		s->i = tmp;
		ft_putstr("sa ");
		s = begin;
	}
	else
		rotate_a(s);
	s = begin;
	return (0);
}
