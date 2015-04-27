/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/27 10:19:53 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/27 10:30:35 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

void		print_list(t_list *s)
{
	t_list *begin;

	begin = s;
	while (s->next != NULL)
	{
		ft_putnbr(s->i);
		ft_putchar (' ');
		s = s->next;
	}
	ft_putnbr(s->i);
	ft_putchar ('\n');
	s = begin;
}
