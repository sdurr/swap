/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_revers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 10:53:07 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/02 11:00:37 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list		*rotate_revers(t_list *s, char c)
{
	t_list *tmp;
	t_list *begin;
	int i;
	int b;
	t_list *elem;

	elem = malloc(sizeof(t_list));
	elem->prev = NULL;
	elem->next = s;
	i = 1;
	tmp = s;
	begin = s;
	tmp = tmp->next;
	while (s->next != NULL)
		s = s->next;
	elem->i = s->i;
	s = s->prev;
	s->next = NULL;
	if (c != 'r')
	{
		ft_putstr ("rr");
		ft_putchar(c);
		ft_putchar(' ');
	}
	return (s);
}
