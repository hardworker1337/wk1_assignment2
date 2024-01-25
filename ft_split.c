/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:47:59 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/24 15:42:35 by nafia            ###   ########.fr       */
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

static char	*ft_get_word(char const *s, int s_index, int w_len)
{
	char	*word;
	int	l_index;
	int	i;

	word = (char *)malloc(sizeof(char) * (w_len + 1));
	l_index = (s_index + w_len);
	i = s_index;
	while (s_index < l_index)
	{
		word[s_index - i] = s[s_index];
		s_index++;
	}
	word[s_index - i] = '\0';
	return (word);
}

void	ft_logic(char **tmp, unsigned int size_s, char const *s, int c)
{
	size_t	i;
	int	j;
	int	count;
	char	*word;

	i = 0;
	j = 0;
	count = 0;
	while ((i <= size_s))
	{
		if ((s[i] == c || s[i] == '\0') && count != 0)
		{
			tmp[j] = (char *)malloc(sizeof(char) * (count + 1));
			word = ft_get_word(s, (i - count), count);
			ft_memcpy(tmp[j], word, count + 1);
			free(word);
			j++;
			count = 0;
		}
		else if (s[i] != c)
			count++;
		i++;
	}
	tmp[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	int	nb_words;

	nb_words = ft_nb_words(s, c);
	tmp = (char **)malloc(sizeof(char*) * (nb_words + 1));
	if (!tmp)
		return (NULL);
	ft_logic(tmp, ft_strlen(s), s, c);
	return  (tmp);
}
