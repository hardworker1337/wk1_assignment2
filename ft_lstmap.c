/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:10:04 by bnafia            #+#    #+#             */
/*   Updated: 2024/01/28 15:02:32 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list 	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp_lst;
	t_list	*head;
	t_list	*prev_node;
	if (!lst)
		return (lst);
	head = lst;
	lst = NULL;
	while (head)
	{
		tmp_lst = (t_list *)malloc(sizeof(t_list)); // Create a new node with malloc 
		tmp_lst->content = f(head->content); // and fill it with the use of the function f
		tmp_lst->next = NULL;
		ft_lstadd_back(&lst, tmp_lst); // allways keep adding the new node at 
					       // the end of the new list
					       // without losing the address of the first node
		prev_node = head; // keep tracking the previous node
		head = head->next;  // go to the next node 
		del(prev_node); // free the previous node
	}
	return (lst);
}
