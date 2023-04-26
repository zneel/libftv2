/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:28 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/26 14:23:15 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isspace(int c)
{
    return ((c >= 8 && c <= 13) || c == 32);
}

int ft_atoi(const char *s)
{
    int         sign;
    int         res;

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
        res = res * 10 + (*s++ - 48);
    return (res * sign);
}
