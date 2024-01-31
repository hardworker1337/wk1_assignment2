/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:21:46 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/30 15:41:08 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_size(long long n)
{
	int	size;

	size = 0;
	if (n < 0)
		n = -n;
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);
}

static char	*ft_logic(int size, long long n, char *tmp)
{
	int	sign;

	sign = 0;
	if (n == 0)
	{
		ft_memcpy(tmp, "0", 2);
	}
	else
	{
		if (n < 0)
		{
			sign = 1;
			tmp[0] = '-';
			n = -n;
		}
		tmp[--size] = '\0';
		while (--size)
		{
			tmp[size] = (n % 10) + '0';
			n = n / 10;
		}
		if (!sign)
			tmp[size] = (n % 10) + '0';
	}
	return (tmp);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*tmp;

	size = ft_get_size(n);
	if (n < 0)
		size += 2;
	else if (n == 0)
		size = 2;
	else
		size += 1;
	tmp = (char *)malloc(sizeof(char) * (size));
	if (!tmp)
		return (NULL);
	ft_logic(size, n, tmp);
	return (tmp);
}
