/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 00:07:01 by hawayda           #+#    #+#             */
/*   Updated: 2024/06/13 00:07:02 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str1[i] != '\0')
	{
		if (str2[0] == str1[i])
		{
			j = 0;
			while (str2[j] != '\0' && i + j < len)
			{
				if (str2[j] != str1[i + j])
					break ;
				j++;
			}
			if (str2[j] == '\0')
				return ((char *)&str1[i]);
		}
		i++;
	}
	return ((char *) NULL);
}
