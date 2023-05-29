/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:17:21 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/29 11:00:27 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delimiter(char c, const char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int	word_count(char const *s, const char *charset)
{
	int	word;

	word = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (!is_delimiter(*s, charset))
		{
			word++;
			while (*s && !is_delimiter(*s, charset))
				s++;
		}
		else
			s++;
	}
	return (word);
}

static int	word_len(char const *s, const char *charset)
{
	int	len;

	len = 0;
	while (s[len] && !is_delimiter(s[len], charset))
		len++;
	return (len);
}

static int	split(char **new, char const *s, const char *charset)
{
	int	i;
	int	w_len;

	i = 0;
	while (*s)
	{
		while (is_delimiter(*s, charset))
			++s;
		if (*s)
		{
			w_len = word_len(s, charset);
			new[i] = ft_calloc(w_len + 1, sizeof(char));
			if (!new[i])
			{
				return (0);
			}
			ft_strlcpy(new[i], s, w_len + 1);
			s += w_len;
			i++;
		}
	}
	new[i] = 0;
	return (1);
}

char	**ft_split(char const *s, const char *charset)
{
	char	**new;
	int		i;

	if (!s)
		return (NULL);
	new = ft_calloc(word_count(s, charset) + 1, sizeof(char *));
	if (!new)
		return (NULL);
	if (!split(new, s, charset))
	{
		i = 0;
		while (new[i])
			free(new[i++]);
		free(new);
		return (NULL);
	}
	return (new);
}
