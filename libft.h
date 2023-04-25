/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:19 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 15:55:38 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);


size_t  ft_strlen(const char *s);

int     ft_isalnum(int c);
int     ft_atoi(const char *s);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_isprint(int c);
int     ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isalpha(int c);

void    *ft_calloc(size_t nmemb, size_t size);

char    *ft_strdup(const char *s);
char    *ft_itoa(int n);

void    *ft_memset(void *s, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    ft_bzero(void *s, size_t n);

#endif