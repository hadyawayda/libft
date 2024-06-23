/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 22:14:40 by hawayda           #+#    #+#             */
/*   Updated: 2024/06/22 22:14:41 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned long nb, char format)
{
	char	*base;
	int		length;

	length = 0;
	base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (nb >= 16)
		length += ft_puthex(nb / 16, format);
	length += ft_putchar(*(base + (nb % 16)));
	return (length);
}
