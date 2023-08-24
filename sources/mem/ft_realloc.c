/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:01:57 by ebouvier          #+#    #+#             */
/*   Updated: 2023/08/24 14:02:10 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *ptr, size_t size)
{
	char	*new_ptr;

	new_ptr = ft_calloc(size + 1, sizeof(char));
	if (!new_ptr)
		return (NULL);
	if (ptr)
	{
		ft_strlcpy(new_ptr, ptr, size + 1);
		free(ptr);
	}
	return (new_ptr);
}
