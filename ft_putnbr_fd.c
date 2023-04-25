/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:10:30 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/25 15:18:24 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long    l;

    l = n;
    if (l < 0)
    {
        ft_putchar_fd('-', fd);
        l = -l;
    }
    if (l > 9)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd(n % 10 + 48, fd);
}