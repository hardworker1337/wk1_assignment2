/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:21:46 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/23 14:50:35 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_size(int n)
{
	int	size;
	int	sign;

	size = 0;
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	while (n)
	{
		size++;
		n = n / 10; 
	}
	if (sign == -1)
		return (size + 1);
	else
		return (size);
}

static int	ft_pow(int nb, int pow, int n)
{
	int    i;
	int    res;

	i = 1;
	res = 1;
	if (n < 0)
	{
		pow = pow - 1;
	}
	while (i < pow )
	{
		res = res * nb;
		i++;
	}
	return (res);
}


static	char	*ft_logic(int size, int n, char *tmp, int magic_nb)
{
	int i;

	i = 0;
	if (n < 0)
	{
		tmp[i] = '-';
		i++;
		n = -n;
	}
	while (i < size)
	{
		tmp[i] = (n / magic_nb) + '0';
		n = n % magic_nb;
		magic_nb = magic_nb / 10;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char    *ft_itoa(int n)
{
	int    size;
	char     *tmp;
	int    magic_nb;

	size = ft_get_size(n);
	if (n == 0)
	{
    		tmp = (char *)malloc(sizeof(char) * (2));
		ft_memcpy(tmp, "0", 2);
		return (tmp);
	}
	if (n == -2147483648)
	{
		tmp = (char *)malloc(sizeof(char) * (12));
		ft_memcpy(tmp, "-2147483648", 12);
		return (tmp);
	}
	tmp = (char *)malloc(sizeof(char) * (size + 1));
	if (!tmp)
		return (NULL);
	magic_nb = ft_pow(10, size, n);
	ft_logic(size, n, tmp, magic_nb);
	return tmp;
}
