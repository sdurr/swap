/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 10:25:41 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/30 10:28:06 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include <stdlib.h>

void		remove_index(t_list *s)
{
	t_list *begin;

	begin = s;
	while (s->next != NULL)
	{
		s->j = s->j - 1;
		s = s->next;
	}
	s->j = s->j - 1;
	s = begin;
}
