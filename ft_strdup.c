/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:56 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 13:11:57 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char        *new;
    size_t      len;
    size_t      i;

    len = ft_strlen(s);
    i = 0;
    new = malloc(sizeof(char *) * (len + 1));
    if (!new)
        return (NULL);
    while (i < len)
    {
        new[i] = s[i];
        i++;
    }
    new[len] = 0;
    return (new);
}