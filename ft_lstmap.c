/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:50:20 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/29 12:28:02 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*head;
	t_list	*tail;
	t_list	*tmp;

	current = lst;
	if (!current)
		return (NULL);
	head = ft_lstnew((*f)(current->content));
	if (!head)
		return (NULL);
	head->next = NULL;
	tail = NULL;
	tmp = head;
	while (current && tmp)
	{
		tail = current;
		tmp = tmp->next;
		tmp->next = ft_lstnew((*f)(current->content));
		current = current->next;
		(*del)(tail->content);
		free(tail);
	}
	return (head);
}
