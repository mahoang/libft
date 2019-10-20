/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:49:53 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/09 11:46:52 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*sdest;
	unsigned char	*ssrc;
	size_t			d;

	d = 0;
	sdest = (unsigned char*)dest;
	ssrc = (unsigned char*)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (d < n)
	{
		sdest[d] = ssrc[d];
		if ((unsigned char)c == ssrc[d])
			return (sdest + d + 1);
		d++;
	}
	return (NULL);
}
