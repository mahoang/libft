/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:20:47 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/09 12:57:13 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dest, const char *src, size_t size)
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
		if (sdest[c] != ssrc[c] || ssrc[c] == '\0')
			return (sdest[c] - ssrc[c]);
		c++;
	}
	return (0);
}
