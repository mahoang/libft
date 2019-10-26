/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:58:40 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/20 17:48:02 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t sdest;
	size_t c;

	sdest = 0;
	while (dest[sdest] && sdest < size)
		sdest++;
	c = sdest;
	if (size == 0)
		return (sdest + ft_strlen(src));
	while (src[c - sdest] && c < size - 1)
	{
		dest[c] = src[c - sdest];
		c++;
	}
	if (sdest < size)
		dest[c] = '\0';
	return (sdest + ft_strlen(src));
}
