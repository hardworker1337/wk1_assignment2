/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:35:04 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/15 20:35:21 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_cmpchr(const char *cs1, const char *cs2, size_t len)
{
	unsigned int	i;

	i = 0;
	while (cs2[i] && i < len)
	{
		if (cs1[i] != cs2[i])
			return (1);
		i++;
	}
	if (i == len)
		return (0);
	return (cs2[i] ? 1 : 0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i])
	{
		if (ft_cmpchr(&big[i], &little[0]) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
