/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:35:35 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/25 00:31:39 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    get_start_pos(const char *s1, const char *set)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (s1[i] && flag)
	{
		if (ft_strchr(set, s1[i]))
		{
			i++;
		}
		else
		{
			flag = 0;
		}
	}
	return (i);
}
static int    get_last_pos(const char *s1, const char *set)
{
	size_t	j;
	int	flag;

	j = ft_strlen(s1) - 1;
	flag = 1;
	while (s1[j] && flag)
	{
		if (ft_strchr(set, s1[j]))
		{
			j--;
		}
		else
		{
			flag = 0;
		}
	}
	return (j);

}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	begin;
	int	end;
	int	i;
	char	*tmp;

	begin = get_start_pos(s1, set);
	end = get_last_pos(s1, set);
	if (begin > end)
		tmp = (char *)malloc(sizeof(char) * (1));
	else
		tmp = (char *)malloc(sizeof(char) * (end - begin + 2));
	if (!tmp)
		return (NULL);
	i = begin;
	while (begin <= end)
	{
		tmp[begin - i] = s1[begin];
		begin++;
	}
	tmp[begin - i] = '\0';
	return (tmp);
}
