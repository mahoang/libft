/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:05:14 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/23 20:47:46 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int c;
	int d;

	c = ft_lstsize(lst);
	d = 0;
	if (lst)
	{
		while (d + 1 != c)
		{
			lst = lst->next;
			d++;
		}
	}
	return (lst);
}
