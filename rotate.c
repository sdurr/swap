/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 11:14:57 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/02 13:30:42 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void		rotate(t_list *s)
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
}
