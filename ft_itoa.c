/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:35:52 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/28 13:31:03 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_nbrlen(int n)
{
	int	sz;

	sz = 0;
	if (n <= 0)
		sz++;
	while (n)
	{
		n /= 10;
		sz++;
	}
	return (sz);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		nbr_len;
	int		sign;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nbr_len = ft_nbrlen(n);
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	new = ft_calloc(nbr_len + 1, sizeof(char));
	if (!new)
		return (NULL);
	new[nbr_len] = 0;
	while (nbr_len)
	{
		new[--nbr_len] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		new[nbr_len] = '-';
	return (new);
}
