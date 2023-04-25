/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:48 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 14:19:08 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char       *d;
    const unsigned char *s;

    d = (unsigned char *) dest;
    s = (const unsigned char *) src;
    if (n == 0)
        return (dest);
    while (n--)
        *d++ = *s++;
    return (dest);
}