/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:15:12 by bnafia            #+#    #+#             */
/*   Updated: 2024/02/20 19:15:24 by bnafia           ###   ########.fr       */
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

static int	ft_logic(const char *nptr, int sign, long long res, int i)
{
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (res >= LONG_MAX / 10)
		{
			if (sign == 1 && nptr[i] > '7')
				return (-1);
			if (sign == -1 && nptr[i] > '8')
				return (0);
		}
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sign;

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
	}
	res = ft_logic(nptr, sign, res, i);
	return (res);
}
