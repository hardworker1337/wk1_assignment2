/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:34:08 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/30 16:04:30 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;
	const unsigned char	*tmp;

	i = 0;
	tmp = s;
	while (i < n)
	{
		if (*tmp == (unsigned char)c)
			return ((void *)(tmp));
		tmp++;
		i++;
	}
	return (NULL);
}
