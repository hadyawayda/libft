/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:34:49 by hawayda           #+#    #+#             */
/*   Updated: 2024/06/17 22:34:49 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// convert to char or string and use putstr or putchar to print it
void	visualize(char c, int *count, va_list *args)
{
	if (c == 'c')
		*count += ft_putchar(va_arg(*args, int));
	if (c == 's')
		*count += ft_putstr(va_arg(*args, char *));
	if (c == 'd' || c == 'i')
		*count += ft_putnbr(va_arg(*args, int));
	if (c == 'u')
		*count += ft_putunbr(va_arg(*args, unsigned int));
	if (c == 'p')
		*count += ft_putptr(va_arg(*args, unsigned long long));
	if (c == 'x')
		*count += ft_putchar(va_arg(*args, unsigned int));
	if (c == 'X')
		*count += ft_putchar(va_arg(*args, unsigned int));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[++i] && str[i] != '%')
			visualize(str[i], &count, &args);
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
