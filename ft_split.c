/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:17:21 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/26 15:58:20 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int word_count(char const *s, char c)
{

    int word;
    
    word = 0;
    if (!s)
        return 0;
    while (*s)
    {
        if (*s != c)
        {
            word++;
            while (*s && *s != c)
                s++;
        }
        else
            s++;
    }
    return (word);
}

char **ft_split(char const *s, char c)
{
    char    **new;
    int     i;
    int     j;

    new = ft_calloc(word_count(s, c) + 1, sizeof(char *));
    if (!new)
        return (NULL);
    i = 0;
    while (*s)
    {
        while (*s == c)
            ++s;
        if (*s)
        {
            j = 0;
            while (s[j] && s[j] != c)
                j++;
            new[i] = ft_calloc(j + 1, sizeof(char));
            if (!new[i])
            {
                free(new);
                return (NULL);
            }
            ft_strlcpy(new[i], s, j + 1);
            s += j;
            i++;
        }
    }
    new[i] = 0;
    return (new);
}
