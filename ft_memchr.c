/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:02:02 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/08 18:46:10 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *haystack, int to_find, size_t size)
{
	unsigned char	*s_haystack;
	size_t			c;

	c = 0;
	s_haystack = (unsigned char *)haystack;
	while (c != size)
	{
		if (s_haystack[c] == (unsigned char)to_find)
			return ((void *)&s_haystack[c]);
		c++;
	}
	return (NULL);
}
