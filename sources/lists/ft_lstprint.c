/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 23:36:33 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/11 23:38:18by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint_int(t_list *head)
{
	while (head)
	{
		ft_putnbr_fd(*(int*)head->content, 1);
		ft_putchar_fd('\n', 1);
		head = head->next;
	}
}