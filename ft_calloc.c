/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:32 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/26 14:38:08 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *mem;
    size_t  total_size;

    if (nmemb == 0 || size == 0)
        return (NULL);
    total_size = nmemb * size;
    if (total_size / size != nmemb)
        return (NULL);
    mem = malloc(total_size);
    if (!mem)
        return (NULL);
    ft_bzero(mem, total_size);
    return (mem);
}
