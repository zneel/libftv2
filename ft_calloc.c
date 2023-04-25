/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:32 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 14:33:46 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *mem;

    if (nmemb == 0 || size == 0)
        return (NULL);
    mem = malloc(nmemb * size);
    if (!mem)
        return (NULL);
    ft_bzero(mem, nmemb * size);
    return (mem);
}
