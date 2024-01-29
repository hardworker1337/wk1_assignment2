/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:53:14 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/28 13:00:50 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp_lst;

	while (*lst)
	{
		tmp_lst = (*lst);
		del((*lst)->content);
		*lst = (*lst)->next;
		free(tmp_lst);
	}
}
