/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:39:02 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/30 16:04:58 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp_lst;
	int		len;

	len = 0;
	tmp_lst = lst;
	while (tmp_lst != NULL)
	{
		tmp_lst = tmp_lst->next;
		len++;
	}
	return (len);
}
