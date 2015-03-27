/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 08:42:10 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/27 14:38:12 by sdurr            ###   ########.fr       */
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
		elem->prev = NULL;
		return (elem);
	}
	while(s->next != NULL)
		s = s->next;
	elem->prev = s;
	s->next = elem;
	return (begin);
}
