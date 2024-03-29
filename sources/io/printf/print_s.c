/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:24:44 by ebouvier          #+#    #+#             */
/*   Updated: 2023/07/23 12:08:29 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_s(t_state *state)
{
	char	*s;

	s = va_arg(state->args, char *);
	if (!s)
		s = "(null)";
	state->bytes += out(state->fd, s, ft_strlen(s));
}
