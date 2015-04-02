/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:43:46 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/02 13:51:29 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int main(int ac, char **av)
{
	int i;
	t_list *s;
	t_list *b;
	t_list *begin;
	int count;

	count = 0;
	s = malloc(sizeof(t_list));
	s ->next = NULL;
	s->prev = NULL;
	s->j = 0;
	i = 1;
	b = malloc(sizeof(t_list));
	b->next = NULL;
	b->prev = NULL;
	b->j = 0;
	while (av[i])
	{
		if (test_long_int_av(av[i]) == 0)
			return (ft_error(1));
		ft_create_elem(s, ft_atoi(av[i]));
		i++;
	}
	if (!av[1] || (av[1] && !av[2]))
		return (ft_error(3));
	if (test_egal(s) == 0)
		return (0);
	if (test_order(s) == 0)
		return (ft_error(2));
	begin = s;
	s = algo_tri(s, b, &count);
	ft_putstr("\n pile a \n");
	while (s)
	{
			ft_putnbr(s->i);
			ft_putchar (' ');
			s = s->next;
	}
	ft_putstr("\n nombre d'operation = ");
	ft_putnbr(count);
	(void )ac;
	return (0);
}
