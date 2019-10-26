/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:56:07 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/23 20:47:55 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		c;
	t_list	*size;

	c = 0;
	size = lst;
	while (size)
	{
		size = size->next;
		c++;
	}
	return (c);
}
