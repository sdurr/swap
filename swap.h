/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:44:17 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/27 15:19:17 by sdurr            ###   ########.fr       */
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

t_list				*ft_create_elem(t_list *s, int i);
t_list				*tri(t_list *s, t_list *b);
t_list				*rotate_a(t_list *s);
t_list				*test_first_more(t_list *s, t_list *b);
t_list				*push_b(t_list *s, t_list *b);

int					tri_b(t_list *s);
int					rotate_b(t_list *s);
#endif
