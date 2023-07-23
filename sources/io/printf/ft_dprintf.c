/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:03:55 by ebouvier          #+#    #+#             */
/*   Updated: 2023/07/23 12:12:00 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	init_state(int fd, t_state *state)
{
	state->bytes = 0;
	state->flags = 0;
	state->fd = fd;
}

int	ft_dprintf(int fd, const char *fmt, ...)
{
	t_state	state;

	if (!fmt || fd < 0)
		return (-1);
	init_state(fd, &state);
	va_start(state.args, fmt);
	init_func_table(&state);
	parse_fmt(&fmt, &state);
	va_end(state.args);
	return (state.bytes);
}
