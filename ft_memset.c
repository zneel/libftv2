/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:52 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 13:33:27 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    char    *area;
    
    area = s;
    while (n)
    {
        *area = c;
        area++;
        n--;
    }
    return (s);
}