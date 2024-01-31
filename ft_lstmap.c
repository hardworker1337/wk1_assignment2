/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:10:04 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/31 15:11:44 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp_lst;
	t_list	*head;

	if (!lst)
		return (lst);
	head = lst;
	lst = NULL;
	while (head)
	{
		tmp_lst = (t_list *)malloc(sizeof(t_list));
		if (!tmp_lst)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		tmp_lst->content = f(head->content);
		tmp_lst->next = NULL;
		ft_lstadd_back(&lst, tmp_lst);
		head = head->next;
	}
	return (lst);
}
