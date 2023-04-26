/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:31:16 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/26 16:11:15 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  ft_strlen(const char *s)
{
    const char *ptr;

    ptr = s;
    while (*ptr)
        ptr++;
    return (ptr - s);
}
