/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 22:31:34 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/23 21:31:59 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	if (!(temp = ft_lstnew(f(lst->content))))
		return (NULL);
	map = temp;
	lst = lst->next;
	while (lst)
	{
		if (!(temp->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (map);
}
