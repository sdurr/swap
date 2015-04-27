/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_revers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 10:53:07 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/27 11:06:36 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

t_list		*rotate_revers(t_list *s)
{
	int i;
	t_list *elem;
	t_list *begin;

	begin = s;
	elem = malloc(sizeof(t_list));
	elem->prev = NULL;
	elem->next = s;
	i = 1;
	while (s->next != NULL)
		s = s->next;
	elem->i = s->i;
	s = s->prev;
	s->next = NULL;
	s = begin;
	s->prev = elem;
	ft_putstr("elem ");
	print_list(s);
	return (s);
}
