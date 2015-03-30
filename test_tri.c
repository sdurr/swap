/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 10:09:34 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/30 10:47:28 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

static int		test_bigest(t_list *s)
{
	t_list *begin;

	begin = s;
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
	return (1);
}

int		test_tri(t_list *s)
{
	t_list *begin;

	begin = s;
	begin = begin->next;
	if (test_order(begin) == 1 && test_bigest(s) == 1)
		return (0);
	return (1);
}
