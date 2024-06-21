/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 04:16:26 by hawayda           #+#    #+#             */
/*   Updated: 2024/06/14 04:16:27 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		set = f(lst->content);
		node = ft_lstnew(set);
		if (!node)
		{
			del(set);
			ft_lstclear(&list, (*del));
			return (list);
		}
		ft_lstadd_back(&list, node);
		lst = lst -> next;
	}
	return (list);
}
