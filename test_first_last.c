/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_first_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 12:16:03 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/28 18:24:06 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

t_list			*test_first_last(t_list *s)
{
	t_list *tmp;
	t_list *begin;
	int i;
	t_list *elem;

	elem = malloc(sizeof(t_list));
	elem->prev = NULL;
	elem->next = s;
	i = 1;
	tmp = s;
	begin = s;
	tmp = tmp->next;
	while (tmp && i == 1)
	{
		if (tmp->i > s->i)
			i = 0;
		tmp = tmp->next;
	}
	tmp = s;
	while (tmp->next != NULL)
		tmp = tmp->next;
	while (s->next != NULL && i == 1)
	{
		if (tmp->i > s->i)
			i = 0;
		s = s->next;
	}
	if (tmp->i > s->i)
		i = 0;

	if (i == 1)
	{
		elem->i = s->i;
		s = s->prev;
		s->next = NULL;
		s = begin;
		s->prev = elem;
		s = s->prev;
		rotate(s);
		return (s);
	}
	s = s->next;
	return (s);
}
