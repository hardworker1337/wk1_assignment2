/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:59:37 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/30 16:12:54 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	int		j;
	char	*csrc;
	char	*cdest;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dest;
	if (!csrc && !cdest)
		return (dest);
	if (dest > src)
	{
		j = n - 1;
		while (j >= 0)
		{
			cdest[j] = csrc[j];
			j--;
		}
	}
	else
	{
		while (i++ < n)
			*cdest++ = *csrc++;
	}
	return (dest);
}
