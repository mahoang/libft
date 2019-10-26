/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:11:43 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/23 20:47:51 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	const *content)
{
	t_list	*newlist;

	if (!(newlist = malloc(sizeof(newlist))))
		return (NULL);
	newlist->content = (void *)content;
	newlist->next = NULL;
	return (newlist);
}
