/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:33:19 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/24 23:45:41 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*tmp;	
	
	tmp = (char *)s;
	i = 0;
	while (tmp[i])
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i++;
	}
	if (tmp[i] == (char)c)
		return (&tmp[i]);
	return (NULL);
	
}
