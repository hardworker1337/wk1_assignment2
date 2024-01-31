/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:47:59 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/31 15:15:40 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_words(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 1;
	while (s[i])
	{
		if (s[i] != c && flag)
		{
			count++;
			flag = 0;
		}
		else if (s[i] == c)
		{
			flag = 1;
		}
		i++;
	}
	return (count);
}

static char	*ft_get_word(char const *s, int s_index, int w_len, char **tmp_ele)
{
	int		l_index;
	int		i;

	*tmp_ele = (char *)malloc(sizeof(char) * (w_len + 1));
	if (!*tmp_ele)
		return (NULL);
	l_index = (s_index + w_len);
	i = s_index;
	while (s_index < l_index)
	{
		(*tmp_ele)[s_index - i] = s[s_index];
		s_index++;
	}
	(*tmp_ele)[s_index - i] = '\0';
	return (*tmp_ele);
}

void	free_tmp(char **tmp, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

char	**ft_logic(char **tmp, unsigned int size_s, char const *s, int c)
{
	size_t	i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while ((i <= size_s))
	{
		if ((s[i] == c || s[i] == '\0') && count != 0)
		{
			if (!ft_get_word(s, (i - count), count, &tmp[j]))
			{
				free_tmp(tmp, j);
				return (NULL);
			}
			j++;
			count = 0;
		}
		else if (s[i] != c)
			count++;
		i++;
	}
	tmp[j] = NULL;
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	int		nb_words;

	if (!s)
		return (NULL);
	nb_words = ft_nb_words(s, c);
	tmp = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!tmp)
		return (NULL);
	if (ft_logic(tmp, ft_strlen(s), s, c))
		return (tmp);
	return (NULL);
}
