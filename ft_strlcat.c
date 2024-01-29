/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:01:01 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/26 20:15:18 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	p_dest;
	unsigned int	p_src;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	p_dest = dest_len;
	p_src = 0;
	while (src[p_src] && (p_src + dest_len + 1) < size)
	{
		dest[p_dest] = src[p_src];
		p_dest++;
		p_src++;
	}
	dest[p_dest] = '\0';
	if (dest_len < size)
	{
		return src_len + dest_len;
	}
	else
	{
		return src_len + size;
	}
}
