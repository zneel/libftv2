/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:47:39 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/12 10:07:20 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;
	t_list	*tail;

	current = lst;
	tail = NULL;
	while (current)
	{
		tail = current;
		current = current->next;
	}
	return (tail);
}
