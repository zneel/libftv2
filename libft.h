/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:19 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 13:44:07 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

size_t  ft_strlen(const char *s);

int     ft_isalnum(int c);
int     ft_atoi(const char *s);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_isprint(int c);
int     ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isalpha(int c);

char    *ft_strdup(const char *s);

void    *ft_memset(void *s, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);

#endif