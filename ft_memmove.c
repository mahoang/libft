/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:05:43 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/22 16:11:49 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*sdest;
	const unsigned char		*ssrc;
	size_t					c;

	sdest = (unsigned char*)dest;
	ssrc = (unsigned char*)src;
	c = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (dest > src)
	{
		while (c++ < n)
			sdest[n - c] = ssrc[n - c];
	}
	else
	{
		while (n-- > 0)
		{
			*(sdest++) = *(ssrc++);
		}
	}
	return (dest);
}
