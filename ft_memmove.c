/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:49 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 13:55:36 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t              i;
    unsigned char       *dest_cpy;
    const unsigned char *src_cpy;

    i = n;
    dest_cpy = (unsigned char *) dest;
    src_cpy = (const unsigned char *) src;
    if (dest < src)
        while (n--)
            *dest_cpy++ = *src_cpy++;
    else
        while (i--)
            *(dest_cpy + i) = *(src_cpy + i);
    return (dest);
}