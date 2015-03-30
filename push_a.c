/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 12:03:34 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/30 15:32:42 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

t_list 		*push_a(t_list *b, t_list *s)
{
	t_list *tmp;

	while (b->next != NULL)
		b = b->next;
	while (b->prev != NULL)
	{
		tmp = b->prev;
		b->next = s;
		s->prev = b;
		s = b;
		s->prev = NULL;
		b = tmp;
		tmp->next = NULL;
		ft_putstr("pa ");
	}
	b->next = s;
	s->prev = b;
	s = b;
	s->prev = NULL;
	b = NULL;
	return  (s);
}
