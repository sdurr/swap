/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 09:56:52 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/02 11:24:41 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

t_list		*algo_tri(t_list *s, t_list *b, int *count)
{
	/* condition boucle A pas trie et B vide */
	while(test_order(s) == 1 && b != NULL)
	{
		if (test(s) == 1 && test(b) == 1)
		{
			s = test_first_last(s);
			b = test_first_last(b);
			ft_putstr("rrr ss rr ");
			*count = *count + 3;
	/* tester 1er A  && 1er de B sont les plus grand et les dernier de A et B sont les plus petit renvoyer vers fonction qui fait rrr ss rr*/
		}
		else if(test(s) == 1)
		{
			s = test_first_last(s);
			ft_putstr("rra sa ra ");
			*count = *count + 1;
		/* 1er de A est le plus grand de A et le dernier de A est le plus petit de A fonction qui fait rra sa ra*/
		}
		else if(test(b) == 1)
		{
			b = test_first_last(b);
			ft_putstr("rrb sb rb ");
			*count = *count + 3;
		/* 1er de B  est le plus grand de B et le dernier de B et le plus petit de B fonction qui fait rrb sb rb*/
		}
		else if ()
		{
			/* tester 1er A  && 1er de B sont les plus grand renvoyer vers fonction qui fait rrr*/
			/* tester dernier A  && dernier de B sont les plus petit renvoyer vers fonction qui fait rrr*/
			s = rotate_revers(s);
			b = rotate_revers(b);
			ft_putstr("rrr");
			*count = *count + 1;
		}
		else if ()
		{
			s = rotate_revers(s);
			ft_putstr("rra");
			*count = *count + 1;
			/* dernier de A est le plus petit de A fonction qui fait rra*/
			/* 1er de A est le plus grand de A fonction qui fait rra*/
		}
	  else if()
	  {
		  b = rotate_revers(b);
		  ft_putstr("rra");
		  swap(b);
		  ft_putstr("ss ");
		  *count = *count + 1;
	  /* 1er de B  est le plus de B fonction qui fait rrb*/
	  /* dernier de B  est le plus peti de B fonction qui fait rrb*/
	  }
	  else if()
	  {
		  swap(s);
		  swap(b);
		  ft_putstr("ss ");
		  *count = *count + 1;
		  /* 1er de A et 1er B plus grand que leur second respectif ss */
	  }
	  else if ()
	  {
		  swap(s);
		  ft_putstr("sa ");
		  *count = *count + 1;
	  /* 1er de A plus grand que le second de A sa */
	  }
	  else if()
	  {
		  swap(b);
		  ft_putstr("sb ");
		  *count = *count + 1;
	  /* 1er de B plus grand que le second de B sb */
	  }
	  else if()
	  {
		  rotate(s);
		  rotate(b);
		  ft_putstr("rr ");
		  *count = *count + 1;
		  /*si B n'est pas vide et que B nest pas trier et que A nest pas trie  rr rotate A et B*/
	  }
	  else if()
	  {
		  rotate(s);
		  ft_putstr("ra ");
		  *count = *count + 1;
	  /* si B est trie ou que la taille de B est == A la taille de A ra rotate a*/
	  }
	  else if()
	  {
		  rotate(b);
		  ft_putstr("rb ");
		  *count = *count + 1;
	  /*si A est trie et b n'est pas vide est B n'est pas trie rb rotate b */
	  }
	  else if()
	  {
		  push_b(s, b);
		  ft_putstr("pb ");
		  *count = *count + 1;
		  /* si la taille de A < taille la taille de A  et A et B ne sont pas trier pb push B*/
	  }
	  else if()
	  {
		 s = push_a(b, s);
		 ft_putstr("pa ");
		  *count = *count + 1;
		 /* si B est trie et que A est trier pa push A*/
	  }
	}
}
