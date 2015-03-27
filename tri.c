/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 10:23:43 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/27 17:19:55 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include <stdlib.h>
#include "libft.h"

t_list		*push_b(t_list *s, t_list *b)
{
	if (s)
	{
		b = ft_create_elem(b, s->i);
		ft_putstr("pb ");
	}
	return (b);
}

t_list		*test_first_more(t_list *s, t_list *b)
{
	t_list *begin;

	begin = s;
	while (s->next != NULL)
	{
		if (begin->i < s->i)
			return (begin);
		s = s->next;
	}
	if (begin->i < s->i)
		return (begin);
	b = push_b(begin, b);
	if (begin->next != NULL)
	{
		begin = begin->next;
		begin->prev = NULL;
		s = begin;
		return (begin);
	}
	return (NULL);
}

t_list		*rotate_a(t_list *s)
{
	t_list *begin;
	int tmp_first;
	int tmp;
	t_list *next;

	tmp_first = s->i;
	begin = s;
	next = s;
	if (next)
		next = next->next;
	while (s->next != NULL)
	{
		s->i = next->i;
		tmp = s->i;
		s = s->next;
		next = next->next;
	}
	s->i = tmp_first;
	ft_putstr("ra ");
	return (begin);
}

t_list		*tri(t_list *s, t_list *b)
{
	t_list *second;
	t_list *begin;
	int tmp;

	second = s;
	second = second->next;
	if (b)
		ft_putstr("");
//	s = test_first_more(s, b);
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
		s = rotate_a(s);
	return (begin);
}
