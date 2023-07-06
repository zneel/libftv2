/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:36:33 by ebouvier          #+#    #+#             */
/*   Updated: 2023/07/06 09:47:47 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_push(t_stack **stack, void *content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->content = content;
	if (!*stack)
	{
		new->next = NULL;
		*stack = new;
	}
	else
	{
		new->next = *stack;
		*stack = new;
	}
}

void	stack_pop(t_stack **stack, void (*del)(void *))
{
	t_stack	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	del(tmp);
}

void	*stack_peek(t_stack *stack)
{
	if (!stack)
		return (STACK_EMPTY);
	return (stack->content);
}
