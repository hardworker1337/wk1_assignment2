/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:31:27 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/30 00:20:41 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n')
		return (1);
	if (c == '\t' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long long int	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace((char)nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	};
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (sign == 1 && (INT_MAX / 10 < res) || sign == -1 && (INT_MIN \ 10 < res))
		{
			if (sign  == 1)
				return (-1);
			else
				return (0); 
		}
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

