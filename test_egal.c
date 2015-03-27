/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_egal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 13:07:56 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/27 13:28:47 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "swap.h"

int			test_egal(t_list *s)
{
	t_list *t;
	t_list *begin;

	begin = s;
	t = s;
	while (s->next != NULL)
	{
		t = t->next;
		while (t->next != NULL)
		{
			if (t->i == s->i)
			{
				ft_putstr_fd("You have too arguments identical\n", 2);
				return (0);
			}
			t = t->next;
		}
		s = s->next;
		t = s;
	}
	t = begin;
	while (t->next != NULL)
	{
		if (t->i == s->i)
		{
			ft_putstr_fd("You have too arguments identical\n", 2);
			return (0);
		}
		t = t->next;
	}
	s = begin;
	return (1);
}
