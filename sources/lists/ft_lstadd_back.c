/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:54:56 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/12 10:08:04 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*current;
	t_list	*tail;

	if (!*lst)
		*lst = new_node;
	else
	{
		current = *lst;
		tail = NULL;
		while (current)
		{
			tail = current;
			current = current->next;
		}
		tail->next = new_node;
	}
}
