/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:17:21 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 17:59:34 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_word_count(char const *s, char c)
{
    int word;

    word = 0;
    if (*s && *s != c)
    {
        word++;
        s++;
    }
    while (*s)
    {
        if (*(s - 1) == c && *s != c)
            word++;
        s++;
    }
    return (word);
}

size_t ft_word_len(char const *s, char c)
{
    size_t len;

    len = 0;
    while (*s && *s != c)
    {
        s++;
        len++;
    }
    return (len);
}

char *ft_strcpy(char *dest, char const *s, size_t len)
{
    size_t  i;

    i = 0;
    while (i < len && *s)
        dest[i++] = *s++;
    dest[i] = 0;
    return (dest);
}

char    **ft_split(char const *s, char c)
{
    char    **new;
    int     words;
    int     word_l;
    int     i;

    words = ft_word_count(s, c);
    new = ft_calloc(words + 1, sizeof(char **));
    i = 0;
    if (!new)
        return (NULL);
    while (i < words)
    {
        while (*s && *s == c)
            s++;
        new[i] = ft_calloc(ft_word_len(s, c) + 1, sizeof(char *));
        if (!new[i])
        {
            free(new);
            return (NULL);
        }
        word_l = ft_word_len(s, c);
        new[i] = ft_strcpy(new[i], s, word_l);
        s += word_l;
        ++i;
    }
    new[words] = 0;
    return (new);
}