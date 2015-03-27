/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:43:46 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/25 15:24:52 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int main(int ac, char **av)
{
	int i;

	i = 2;
	if (ft_strlen(av[1]) > 10)
		ft_putendl("Error");
	while (av[i])
	{
		av[1] = ft_strjoin(av[1], " ");
		if (ft_strlen(av[i]) > 10)
			ft_putendl("Error");
			av[1] = ft_strjoin(av[1], av[i++]);
	}
	ft_error(av[1] , ac);
	return (0);
}
