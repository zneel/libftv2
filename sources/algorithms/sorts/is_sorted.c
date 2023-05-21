/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:44:24 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/21 12:56:37 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sorted(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (length <= 1)
		return (1);
	i = 1;
	while (i < length)
	{
		if ((*f)(tab[i - 1], tab[i]) > 0)
			return (0);
		++i;
	}
	return (1);
}
