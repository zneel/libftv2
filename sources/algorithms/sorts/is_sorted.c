/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:44:24 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/15 16:48:52 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sorted(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	way;

	i = 1;
	way = 0;
	if (length == 1 || length == 0)
		return (1);
	while (i < length)
	{
		if ((*f)(tab[i - 1], tab[i]) > 0)
		{
			if (way == -1)
				return (0);
			way = 1;
		}	
		if ((*f)(tab[i - 1], tab[i]) < 0)
		{
			if (way == 1)
				return (0);
			way = -1;
		}
		i++;
	}
	return (1);
}
