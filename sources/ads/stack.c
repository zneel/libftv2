/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:36:33 by ebouvier          #+#    #+#             */
/*   Updated: 2023/08/29 21:30:18 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_delete(t_stack **stack, void (*del)(void *))
{
	t_stack	*tmp;
	t_stack	*curr;

	curr = *stack;
	while (curr)
	{
		tmp = curr->next;
		if (del)
			del(curr->content);
		free(curr);
		curr = tmp;
	}
	*stack = NULL;
}

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

	if (!*stack)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	if (del)
		del(tmp->content);
	free(tmp);
}

void	*stack_peek(t_stack *stack)
{
	if (!stack)
		return (STACK_EMPTY);
	return (stack->content);
}

t_bool	stack_is_empty(t_stack *stack)
{
	if (!stack)
		return (true);
	return (false);
}
