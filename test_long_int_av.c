/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_long_int_av.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 13:32:50 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/31 14:05:02 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"
#include "libft.h"

int			test_long_int_av(char *s)
{
	if (ft_strcmp(s, "2147483648") == 0)
		return (0);
	if (ft_strcmp(s, "-2147483649") == 0)
		return (0);
	if (s[0] != '-' && ft_strlen(s) > 10)
		return (0);
	else if (s[0] == '-' && ft_strlen(s) > 11)
		return (0);
	if (ft_strlen(s) == 10)
		{
			if (s[0] > '2')
				return (0);
			else if (s[0] == '2')
			{
				if (s[1] > '1')
					return (0);
				else if (s[1] == '1')
				{
					if (s[2] > '4')
						return (0);
					else if (s[2] == '1')
					{
						if (s[3] > '7')
							return (0);
						else if (s[3] == '7')
						{
							if (s[4] > '4')
								return (0);
							else if (s[4] == '4')
							{
								if (s[5] > '8')
									return (0);
								else if (s[5] == '8')
								{
									if (s[6] > '3')
										return (0);
									else if (s[6] == '3')
									{
										if (s[7] > '6')
											return (0);
										else if (s[7] == '6')
										{
											if (s[8] > '4')
												return (0);
											else if (s[8] == '4')
												 {
													 if (s[9] > '8')
														 return (0);
												 }
										}
									}
								}
							}
						}
					}
				}
			}
		}
	if (ft_strlen(s) == 11)
		{
			if (s[1] > '2')
				return (0);
			else if (s[1] == '2')
			{
				if (s[2] > '1')
					return (0);
				else if (s[2] == '1')
				{
					if (s[3] > '4')
						return (0);
					else if (s[3] == '1')
					{
						if (s[4] > '7')
							return (0);
						else if (s[4] == '7')
						{
							if (s[5] > '4')
								return (0);
							else if (s[5] == '4')
							{
								if (s[6] > '8')
									return (0);
								else if (s[6] == '8')
								{
									if (s[7] > '3')
										return (0);
									else if (s[7] == '3')
									{
										if (s[8] > '6')
											return (0);
										else if (s[8] == '6')
										{
											if (s[9] > '4')
												return (0);
										}
									}
								}
							}
						}
					}
				}
			}
		}
return (1);
}
