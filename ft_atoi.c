/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:28 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 12:36:37 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isspace(int c)
{
    return ((c >= 8 && c <= 13) ||c == 32);
}

int ft_atoi(const char *s)
{
    int         sign;
    int         res;
    const char  *cpy;

    sign = 1;
    cpy = s;
    res = 0;
    while (ft_isspace(*cpy))
        cpy++;
    if (*cpy == '-' || *cpy == '+')
    {
        if (*cpy == '-')
            sign = -sign;
        cpy++;
    }
    while (ft_isdigit(*cpy))
        res = res * 10 + (*cpy++ - 48);
    return (res * sign);
}
