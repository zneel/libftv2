/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:11:36 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/26 22:07:39 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int in_set(char c, const char *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

size_t trimmed_len(char const *s1, char const *set)
{
    size_t len;
    size_t start;
    size_t end;
    size_t total;

    start = 0;
    end = 0;
    total = ft_strlen(s1); //FIXME: fix that shit
    while (s1[start] && in_set(s1[start], set))
        start++;
    len = start;
    if (len == total)
        return (0);
    while (s1[len])
        len++;
    end = len - 1;
    while (in_set(s1[end], set))
        end--;
    return (end - start + 1);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *new;
    size_t len;

    if (!s1)
        return (NULL);
    len = trimmed_len(s1, set) + 1;
    if (!len) // FIXME: fix that shit
        return (NULL);
    new = ft_calloc(len, sizeof(char));
    if (!new)
        return (NULL);
    while (*s1 && in_set(*s1, set))
        s1++;
    ft_strlcpy(new, s1, len);
    return (new);
}
