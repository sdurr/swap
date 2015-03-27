/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 14:40:48 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/25 15:23:09 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int		ft_error(char *av, int ac)
{
	int i;

	i = 0;
	if (ac == 1)
	{
		ft_putendl("Error");
		return (0);
	}
	while ((av[i] >= '0' && av[i] <= '9') || av[i] == ' ')
		i++;
	if (av[i] == '\0')
		return (1);
	ft_putendl("Error");
	return (0);
}
