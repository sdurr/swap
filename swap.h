/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:44:17 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/30 15:01:02 by sdurr            ###   ########.fr       */
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

int					ft_error(char *av, int ac);
int					test_order(t_list *s);
int					test_order_reverse(t_list *s);
int					test_egal(t_list *s);
int					test_long(t_list *s, t_list *b);
int					test_more(t_list *s);
t_list				*ft_create_elem(t_list *s, int i);
int					tri(t_list *s, t_list *b);
int					rotate_a(t_list *s);
int					test_first_more(t_list *s, t_list *b);
int					push_b(t_list *s, t_list *b);


int					end_elem(t_list *s);
int					tri_b(t_list *s);
int					rotate_b(t_list *s);
int					test_tri(t_list *s);

void				remove_index(t_list *s);
t_list				*push_a(t_list *b, t_list *s);
#endif
