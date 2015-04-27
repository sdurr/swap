/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:44:17 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/27 10:35:36 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SWAP_H
# define	SWAP_H

# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*prev;
	int				i;
	int				j;
	struct s_list	*next;
}					t_list;


int					test_order(t_list *s);
int					test_order_reverse(t_list *s);
int					test_egal(t_list *s);
int					test_long(t_list *s, t_list *b);
int					test_more(t_list *s);
t_list				*ft_create_elem(t_list *s, int i);
int					tri(t_list *s, t_list *b, int *count);

int					test_first_more(t_list *s, t_list *b, int *count);



int					end_elem(t_list *s);
int					tri_b(t_list *s);
int					rotate_b(t_list *s);
int					test_tri(t_list *s);
int					test_long_int_av(char *s);

void				remove_index(t_list *s);
void				print_list(t_list *s);



/*fonction d'erreurs*/

int					ft_error(int i);

/*fonction de test */
int					test_rr(t_list *s);
int					test_swap(t_list *s);
int					test(t_list *s);

/* avant envoi vers fonction d'operation */
t_list				*algo_tri(t_list *s, t_list *b, int *count);

/*fonction d'operation */
t_list				*rotate_revers(t_list *s);
t_list				*test_first_last(t_list *s);
t_list				*push_a(t_list *b, t_list *s);
void				swap(t_list *s);
void				rotate(t_list *s);
void				push_b(t_list *s, t_list *b);

#endif
