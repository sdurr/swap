/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_order.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 09:12:07 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/30 11:59:34 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include <stdlib.h>
#include "libft.h"

int			test_order_reverse(t_list *s)
{
	t_list *begin;
	t_list *test;
	int tmp;

	test = s;
	begin = s;
	while (s->next != NULL)
	{
		test = test->next;
		while (test->next != NULL)
		{
			if (s->i < test->i)
			{
				s = begin;
				return (1);
			}
			test = test->next;
		}
		tmp = s->i;
		s = s->next;
		test = s;
	}
	if (s->i < tmp)
	{
		s = begin;
		return (1);
	}
	s = begin;
	return (0);
}
