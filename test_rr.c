/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 12:40:30 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/27 11:43:07 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int			test_rr(t_list *s)
{
	int first;
	int end;
	t_list *begin;
	int i;

	begin = s;
	first = s->i;
	if (first == 0)
		return (0);
	ft_putstr("first = ");
	ft_putnbr(s->i);
	ft_putchar('\n');
	i = 0;
	while (i == 0 && s->next != NULL)
	{
		if (first < s->i)
			i = 1;
		else
			s = s->next;
	}
	if (first < s->i)
		i = 1;
	if (i == 1)
	{
		s = begin;
		return (1);
	}
	ft_putstr("test");
	while (s->next != NULL)
		s = s->next;
	end = s->i;
	if (s->prev != NULL)
		s = s->prev;
	while (i == 0 && s->prev != NULL)
	{
		if (end > s->i)
			i = 1;
		else
			s = s->prev;
	}
	if (end > s->i)
		i = 1;
	if (i == 1)
	{
		s = begin;
		return (1);
	}
	s = begin;
	return (0);
}
