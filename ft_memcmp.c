/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:04:03 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/09 12:07:27 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t size)
{
	unsigned const char	*sdest;
	unsigned const char	*ssrc;
	size_t				c;

	sdest = (unsigned char*)dest;
	ssrc = (unsigned char*)src;
	c = 0;
	if (src == NULL && dest == NULL)
		return (0);
	while (c < size)
	{
		if (sdest[c] != ssrc[c])
			return (sdest[c] - ssrc[c]);
		c++;
	}
	return (0);
}
