/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:43:46 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/27 18:44:09 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int main(int ac, char **av)
{
	int i;
	t_list *s;
	t_list *b;

	s = malloc(sizeof(t_list));
	s = NULL;
	i = 1;
	b = malloc(sizeof(t_list));
	b->next = NULL;
	b->prev = NULL;
	while (av[i])
	{
		s = ft_create_elem(s, ft_atoi(av[i]));
		i++;
	}
	if (!av[1])
	{
		ft_putstr_fd("Missing arguments\n", 2);
		return (0);
	}
	if (test_egal(s) == 0)
		return (0);
	if (test_order(s) == 0)
	{
		ft_putstr("Your list is already sort\n");
		return (0);
	}
	while (test_order(s) == 1)
	{
		s = tri(s, b);
	ft_putstr("test\n");
	}
	if (b->next != NULL)
	{
		if (b)
		b = b->next;
		//	while (test_order_reverse(b) == 1)
		//{
//			tri_b(b);
		//	}
	}
	ft_putstr("\n pile a \n");
	if (s)
	{
		while (s)
		{
			ft_putnbr(s->i);
			ft_putchar (' ');
			s = s->next;
		}
	}
	ft_putstr("\npile b \n");
	while (b)
	{
		ft_putnbr(b->i);
		ft_putchar (' ');
		b = b->next;
	}
	(void )ac;
	return (0);
}
