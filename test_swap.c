/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 15:17:33 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/31 15:20:13 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

void		test_swap(t_list *s, int *count)
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
		*count = *count + 1;
		ft_putstr("sa ");
		s = begin;
	}
}
