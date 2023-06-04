/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:06:33 by ebouvier          #+#    #+#             */
/*   Updated: 2023/06/04 20:17:10 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2048
# endif

# include "libft.h"
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_gnl_list
{
	struct s_gnl_list	*next;
	char				*data;
	ssize_t				read;
	ssize_t				eol;
	int					eol_found;
	int					eof;
}						t_gnl_list;

char					*get_next_line(int fd);
t_gnl_list				*lst_new(void);
t_gnl_list				*lst_append(t_gnl_list *head);
void					lst_free(t_gnl_list **head);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);

#endif