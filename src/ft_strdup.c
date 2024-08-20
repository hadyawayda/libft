/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 01:05:46 by hawayda           #+#    #+#             */
/*   Updated: 2024/06/13 01:05:47 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;

	dup = (char *)malloc((ft_strlen(src) + 1));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, src, ft_strlen(src) + 1);
	return (dup);
}
