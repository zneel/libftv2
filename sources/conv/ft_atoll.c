/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:10:08 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/21 16:21:25 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	overflow(int sign)
{
	if (sign == 1)
		return (LLONG_MAX);
	else
		return (LLONG_MIN);
}

long long	ft_atoll(const char *s)
{
	int			sign;
	long long	res;
	long long	prev_res;

	sign = 1;
	res = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (ft_isdigit(*s))
	{
		prev_res = res;
		res = res * 10 + *s++ - '0';
		if (res < prev_res)
			return (overflow(sign));
	}
	return (res * sign);
}
