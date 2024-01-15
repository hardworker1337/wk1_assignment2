/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:32:31 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/15 20:32:33 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*last;
	char	*tmp;
	
	i = 0;
	tmp = (char *)s;
	last = NULL;
	while (tmp[i])
	{
		if (tmp[i] == (char)c)
			last = &tmp[i];
		i++;
	}
	if (tmp[i] == (char)c)
		last = &tmp[i];
	return (last);
}
