/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:31:16 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/09 15:33:49 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  ft_strlen(const char *s)
{
    const char *cpy;

    cpy = s;
    while (*cpy)
        cpy++;
    return (cpy - s);
}
