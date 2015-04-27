/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/19 10:35:24 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/19 10:49:54 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "swap.h"
#include "libft.h"

int			test(t_list *s)
{
	t_list *tmp;
	t_list *begin;
	int i;
	static int j=0;

	j++;
	if (!s)
		return (0);
	if (s->next == NULL)
	{
		return (0);
	}
	i = 1;
//	ft_putnbr(s->i);

	tmp = s;
	begin = s;
	while (tmp->next != NULL && i == 1)
	{
		if (tmp->i > s->i)
			i = 0;
		tmp = tmp->next;
	}
	tmp = s;
	while (s->next != NULL && i == 1)
	{
		if (tmp->i > s->i)
			i = 0;
		s = s->next;
	}
	if (tmp->i > s->i)
		i = 0;
	if (i == 1)
	{
		s = begin;
		return (1);
	}
	s = begin;
	return (0);
}
