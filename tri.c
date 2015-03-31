/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 10:23:43 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/31 16:20:01 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include <stdlib.h>
#include "libft.h"

int		push_b(t_list *s, t_list *b, int *count)
{
	if (s->next != NULL)
	{
		ft_create_elem(b, s->i);		remove_index(s);
		*count = *count + 1;
		ft_putstr("pb ");
	}
	return (0);
}

int		test_first_more(t_list *s, t_list *b, int *count)
{
	t_list *begin;

	begin = s;
	if (b)
		ft_putstr("");
	while (s->next != NULL)
	{
		if (begin->i > s->i)
		{
			s = begin;
			return (0);
		}
		s = s->next;
	}
	if (begin->i > s->i)
	{
		s = begin;
		return (0);
	}
	s = begin;
	push_b(s, b, count);
	s = s->next;
	return (1);
}

int	rotate_a(t_list *s, int *count)
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
	*count = *count + 1;
	ft_putstr("ra ");
	return (0);
}

int		tri(t_list *s, t_list *b, int *count)
{
	t_list *second;
	t_list *begin;
	int tmp;

	second = s;
	second = second->next;
	if (test_first_more(s, b, count) == 1)
	{
		s = s->next;
		s->prev = NULL;
		return (3);
	}
	begin = s;
	s = begin;
	if (test_tri(s) == 0)
	{
		if (s->i > second->i)
		{
			tmp = s->i;
			s->i = second->i;
			s = s->next;
			s->i = tmp;
			*count = *count + 1;
			ft_putstr("sa ");
			s = begin;
		}
		else
			rotate_a(s, count);
	}
	else
		rotate_a(s, count);
		s = begin;
	return (0);
}
