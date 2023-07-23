/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:38:09 by ebouvier          #+#    #+#             */
/*   Updated: 2023/07/23 11:52:19 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "libft.h"
# include <stdlib.h>
# define STACK_EMPTY 0

typedef struct s_stack
{
	void			*content;
	struct s_stack	*next;
}					t_stack;

void				stack_push(t_stack **stack, void *content);
void				stack_pop(t_stack **stack, void (*del)(void *));
void				*stack_peek(t_stack *stack);
t_bool				stack_is_empty(t_stack *stack);

#endif