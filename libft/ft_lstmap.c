/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:19:32 by cprester          #+#    #+#             */
/*   Updated: 2022/08/14 21:22:11 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newls;
	t_list	*page;

	if (!lst)
		return (NULL);
	newls = ft_lstnew(f(lst->content));
	if (!newls)
	{
		ft_lstdelone(newls, del);
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
		page = ft_lstnew(f(lst->content));
		if (!page)
		{
			ft_lstclear(&newls, del);
			return (NULL);
		}
		ft_lstadd_back(&newls, page);
	}
	return (newls);
}
