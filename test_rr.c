/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 12:40:30 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/28 18:33:51 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int			test_rr(t_list *s)
{
	int first;
	int end;
	t_list *begin;
	int i;

	begin = s;
	first = s->i;
	if (s->next == NULL)
		return (0);
	if (first == 0)
		return (0);
	i = 1;
	while (i == 1 && s->next != NULL)
	{
		if (first > s->i)
			i = 0;
		else
			s = s->next;
	}
	if (first > s->i)
		i = 0;
	if (i == 1)
	{
		s = begin;
		return (1);
	}
	while (s->next != NULL)
		s = s->next;
	end = s->i;
	if (s->prev != NULL)
		s = s->prev;
	i = 1;
	while (i == 1 && s->prev != NULL)
	{
		if (end < s->i)
			i = 0;
		else
			s = s->prev;
	}
	if (end < s->i)
		i = 0;
	if (i == 1)
	{
		s = begin;
		return (1);
	}
	s = begin;
	return (0);
}
