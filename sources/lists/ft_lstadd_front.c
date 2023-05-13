/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:02:43 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/12 10:06:54 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	t_list	*tmp;

	tmp = *lst;
	*lst = new_node;
	new_node->next = tmp;
}
