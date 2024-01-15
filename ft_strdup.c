/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:34:46 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/15 20:34:50 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*tmp;
	int	len;
	int	i;

	len = ft_strlen(s);
	tmp = (char *)malloc((len+1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while ((tmp[i] = s[i]) != '\0')
	{
		i++;
	}
	return (tmp);
}
