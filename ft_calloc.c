/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:32:53 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/20 14:46:17 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;

	void	*ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < (nmemb * size))
	{
		((char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
