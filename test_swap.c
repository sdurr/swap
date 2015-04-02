/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 15:17:33 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/02 13:18:34 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int		test_swap(t_list *s)
{
	t_list *second;
	t_list *begin;

	if (s->next != NULL)
	{
		second = s;
		second = second->next;
		begin = s;
		s = begin;
		if (s->i > second->i)
			return (1);
	}
	return (0);
}
