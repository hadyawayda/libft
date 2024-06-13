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
	char	ini;
	int		index;

	ini = *(char *)s;
	index = ft_strlen(s);
	s = (s + index);
	while (*(char *)s != ini && c != *s)
		s--;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
