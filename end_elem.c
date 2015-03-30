/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 10:36:22 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/30 10:41:05 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int			end_elem(t_list *s)
{
	t_list *begin;

	begin = s;
	while(s->next != NULL)
		s = s->next;
	ft_putstr("s-> i = ");
	ft_putnbr (s->i);
	ft_putstr("\n");
	return (s->i);
}
