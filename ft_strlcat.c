/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:58:40 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/18 17:08:06 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t sdest;
	size_t ssrc;

	sdest = ft_strlen(dest);
	ssrc = ft_strlen(src);
	if (sdest >= size)
		return (ssrc + size);
	if (sdest < (size - ssrc))
		ft_strncpy(dest + sdest, src, ssrc + 1);
	dest[sdest + size] = '\0';
	return (sdest + ssrc);
}
