/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:54:27 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/16 22:54:30 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lists.h"

void	ft_lstprint_int(t_list *head)
{
	while (head)
	{
		ft_putnbr_fd(*(int *)head->content, 1);
		ft_putchar_fd('\n', 1);
		head = head->next;
	}
}

void	ft_lstprint_str(t_list *head)
{
	while (head)
	{
		ft_putstr_fd(head->content, 1);
		head = head->next;
	}
}