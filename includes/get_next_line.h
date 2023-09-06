/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:22:33 by mhoyer            #+#    #+#             */
/*   Updated: 2023/09/06 11:41:11 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd, int i);

char	*ft_strdup_gnl(char *s, int deb, int end);

int		ft_strlen_gnl(const char *s);

char	*ft_strjoin_gnl(char *s1, char *s2, int t_s2);

#endif