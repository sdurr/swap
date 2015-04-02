/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 15:17:33 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/02 11:11:58 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

void		swap(t_list *s)
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
		s = begin;
	}
}
