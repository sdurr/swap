/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 09:56:52 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/27 10:41:44 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

t_list		*algo_tri(t_list *s, t_list *b, int *count)
{
	/* condition boucle A pas trie et B vide */
	if (s->next != NULL)
		s = s->next;
	if (b->next != NULL)
		b = b->next;
	print_list(s);

	while(test_order(s) == 1)
	{
		if (test(s) == 1 && test(b) == 1)
		{
			ft_putstr("condition 1\n");
			s = test_first_last(s);
			b = test_first_last(b);
			ft_putstr("rrr ss rr \n");
			*count = *count + 3;
			print_list(s);
			ft_putstr("condition 1\n");
	/* tester 1er A  && 1er de B sont les plus grand et les dernier de A et B sont les plus petit renvoyer vers fonction qui fait rrr ss rr*/
		}
		else if(test(s) == 1)
		{
			ft_putstr("condition 2\n");
			s = test_first_last(s);
			ft_putstr("rra sa ra \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 2\n");
		/* 1er de A est le plus grand de A et le dernier de A est le plus petit de A fonction qui fait rra sa ra*/
		}
		else if(test(b) == 1)
		{
			ft_putstr("condition 3\n");
			b = test_first_last(b);
			ft_putstr("rrb sb rb \n");
			*count = *count + 3;
			ft_putstr("condition 3\n");
		/* 1er de B  est le plus grand de B et le dernier de B et le plus petit de B fonction qui fait rrb sb rb*/
		}
		else if (test_rr(s) == 1 && test_rr(b) == 1)
		{
			ft_putstr("condition 4\n");
			/* tester 1er A  && 1er de B sont les plus grand renvoyer vers fonction qui fait rrr*/
			/* tester dernier A  && dernier de B sont les plus petit renvoyer vers fonction qui fait rrr*/
			s = rotate_revers(s);
			b = rotate_revers(b);
			ft_putstr("rrr \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 4\n");
		}
		else if (test_rr(s) == 1)
		{
			ft_putstr("condition 5\n");
			s = rotate_revers(s);
			ft_putstr("rra \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 5\n");
			/* dernier de A est le plus petit de A fonction qui fait rra*/
			/* 1er de A est le plus grand de A fonction qui fait rra*/
		}
		else if (test_rr(b) == 1)
		{
			ft_putstr("condition 6\n");
		  b = rotate_revers(b);
		  ft_putstr("rrb \n");
		  *count = *count + 1;
		  print_list(s);
		  ft_putstr("condition 6\n");
	  /* 1er de B  est le plus de B fonction qui fait rrb*/
	  /* dernier de B  est le plus peti de B fonction qui fait rrb*/
	  }
		else if(test_swap(s) == 1 && test_swap(b) == 1)
		{
			ft_putstr("condition 7\n");
			swap(s);
			swap(b);
			ft_putstr("ss \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 7\n");
			/* 1er de A et 1er B plus grand que leur second respectif ss */
		}
		else if (test_swap(s) == 1)
		{
			ft_putstr("condition 8\n");
			swap(s);
			ft_putstr("sa \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 8\n");
			/* 1er de A plus grand que le second de A sa */
		}
		else if (test_swap(b) == 1)
		{
			ft_putstr("condition 9\n");
			swap(b);
			ft_putstr("sb \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 9\n");
			/* 1er de B plus grand que le second de B sb */
		}
		else if (b->next != NULL && test_order_reverse(b) == 0 && test_order(s) == 1)
		{
			ft_putstr("condition 10\n");
			rotate(s);
			rotate(b);
			ft_putstr("rr \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 10\n");
			/*si B n'est pas vide et que B nest pas trier et que A nest pas trie  rr rotate A et B*/
		}
		else if(test_order(s) == 0 &&  test_order_reverse(b) == 1 && b->next != NULL)
		{
			ft_putstr("condition 12\n");
			rotate(b);
			ft_putstr("rb \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 12\n");
			/*si A est trie et b n'est pas vide est B n'est pas trie rb rotate b */
		}
		else if(test_long(s, b) == 1)
		{
			ft_putstr("condition 13\n");
			push_b(s, b);
			ft_putstr("pb \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 13\n");
			/* si la taille de A < taille la taille de A  et A et B ne sont pas trier pb push B*/
		}
		else if (test_order_reverse(b) == 0)
		{
			ft_putstr("condition 14\n");
			s = push_a(b, s);
			ft_putstr("pa \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 14\n");
			/* si B est trie et que A est trier pa push A*/
		}
		else if(test_order_reverse(b) == 0 || test_long(s, b) == 0)
		{
			ft_putstr("condition 11\n");
			rotate(s);
			ft_putstr("ra \n");
			*count = *count + 1;
			print_list(s);
			ft_putstr("condition 11\n");
			/* si B est trie ou que la taille de B est == A la taille de A ra rotate a*/
		}

	}
	return (s);
}
