/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:38:09 by ebouvier          #+#    #+#             */
/*   Updated: 2023/06/16 20:48:33 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# define STACK_EMPTY 0

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_stack;

void				stack_push(t_stack **stack, int data);
void				stack_pop(t_stack **stack);
int					stack_peek(t_stack *stack);

#endif