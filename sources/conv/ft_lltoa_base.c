/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:02:13 by ebouvier          #+#    #+#             */
/*   Updated: 2023/08/25 14:13:39 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ll_nbr_len_base(long long nbr, int base_len)
{
	size_t	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		len++;
		nbr /= base_len;
	}
	return (len);
}

char	*ft_lltoa_base(long long n, char *base)
{
	size_t	len;
	size_t	base_len;
	int		sign;
	char	*result;

	base_len = ft_strlen(base);
	len = ll_nbr_len_base(n, base_len);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	while (len)
	{
		result[--len] = base[n % base_len];
		n /= base_len;
	}
	if (sign)
		result[len] = '-';
	return (result);
}
