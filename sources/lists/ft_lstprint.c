/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:54:27 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/22 21:25:24 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lists.h"

void	ft_lstprint_int(t_list *head)
{
	while (head)
	{
		ft_printf("%d\n", *(int *)head->content);
		head = head->next;
	}
}

void	ft_lstprint_str(t_list *head)
{
	while (head)
	{
		ft_printf("%d", head->content);
		head = head->next;
	}
}
