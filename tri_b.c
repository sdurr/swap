
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 10:23:43 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/27 17:12:02 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include <stdlib.h>
#include "libft.h"

int			rotate_b(t_list *s)
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
	ft_putstr("rb ");
	s = begin;
	return (0);
}

int		tri_b(t_list *s)
{
	t_list *second;
	t_list *begin;
	int tmp;

	second = s;
	second = second->next;
	begin = s;
	s = begin;
	if (s->i > second->i)
	{
		tmp = s->i;
		s->i = second->i;
		s = s->next;
		s->i = tmp;
		ft_putstr("sb ");
		if (test_order(begin) == 0)
		{
			s = begin;
			return(0);
		}
	}
	else
		rotate_b(s);
	s = begin;
	return (0);
}
