/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 14:40:48 by sdurr             #+#    #+#             */
/*   Updated: 2015/04/02 09:56:09 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int		ft_error(int i)
{
	if (i == 1)
	{
		ft_putstr_fd("overflow it's not int\n", 2);
		return (0);
	}
	if (i == 2)
	{
		ft_putstr_fd("Your list is already sort\n", 2);
		return (0);
	}
	if (i == 3)
	{
		ft_putstr_fd("Missing arguments\n", 2);
		return (0);
	}
	return (0);
}
