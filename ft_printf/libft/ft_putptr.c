/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <hawayda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 23:16:12 by hawayda           #+#    #+#             */
/*   Updated: 2024/06/20 23:17:55 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ptr_len(int nb)
{
	int	length;

	length = 0;
	if (ptr == 0)
		return (1);
	while (ptr > 0)
	{
		ptr = ptr / 16;
		length++;
	}
	return (length);
}

int	ft_putptr(unsigned long long ptr)
{
	char	*hex_digits;
	int		length;

	length = 0;
	hex_digits = "0123456789abcdef";
	if (ptr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	ft_putchar('0');
	ft_putchar('x');
	length += 2;
	if (ptr >= 16)
		length += ft_putptr(ptr / 16);
	ft_putchar(hex_digits[ptr % 16]);
	length += 1;
	return (length);
}
