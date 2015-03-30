/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karakhirn <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 21:43:22 by karakhirn         #+#    #+#             */
/*   Updated: 2015/03/30 10:29:39 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int		test_long(t_list *s, t_list *b)
{
	t_list *s_b;
	t_list *b_b;

	s_b = s;
	b_b = b;
	while (s->next != NULL)
		s = s->next;
	while (b->next != NULL)
		b = b->next;
	if (s->j > b->j)
		return (0);
	s = s_b;
	b = b_b;
	return (1);
}
