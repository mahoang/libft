/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:39:47 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/12 13:19:30 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*sdest;
	const unsigned char		*ssrc;

	sdest = dest;
	ssrc = src;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (n-- > 0)
		sdest[n] = ssrc[n];
	return ((void*)dest);
}
