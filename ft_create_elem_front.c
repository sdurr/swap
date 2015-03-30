/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 08:42:10 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/30 10:19:36 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include <stdlib.h>

t_list *ft_create_elem(t_list *s, int i)
{
	t_list *begin;
	t_list *elem;

	begin = s;
	elem = malloc(sizeof(t_list));
	elem->next = NULL;
	elem->i = i;
	if (s == NULL)
	{
		elem->j = 0;
		elem->prev = NULL;
		return (elem);
	}
	while(s->next != NULL)
		s = s->next;
	elem->j = s->j + 1;
	elem->prev = s;
	s->next = elem;
	return (begin);
}
