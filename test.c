/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_first_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 12:16:03 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/02 13:52:22 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int			test(t_list *s)
{
	t_list *tmp;
	t_list *begin;
	int i;

	ft_putstr("test.c rentre\n");
	ft_putchar('\n');
	if (!s)
		return (0);
	if (s->next == NULL)
	{
		ft_putstr("test.c sort s->next == NULL\n");
		return (0);
	}
	i = 1;
	ft_putnbr(s->i);

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
		ft_putstr("test.c sort\n");
		return (1);
	}
	ft_putstr("test.c sort\n");
	return (0);
}