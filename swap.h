/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:44:17 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/27 23:18:24 by karakhirn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SWAP_H
# define	SWAP_H

typedef struct		s_list
{
	struct s_list	*prev;
	int				i;
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

int					tri_b(t_list *s);
int					rotate_b(t_list *s);
#endif
