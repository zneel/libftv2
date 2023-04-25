/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:49 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 13:58:47 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t              i;

    i = n;
    if (dest < src)
        ft_memcpy(dest, src, n);
    else
        while (i--)
            *(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
    return (dest);
}