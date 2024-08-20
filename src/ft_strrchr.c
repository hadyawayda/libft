/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 23:36:00 by hawayda           #+#    #+#             */
/*   Updated: 2024/06/12 23:36:01 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char const	*ini;

	ini = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ini = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)ini);
}
