/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:10:53 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/21 14:07:39 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t c;

	c = 0;
	if (!(dest && src))
		return (0);
	while (src[c] != '\0' && c < (size - 1) && size != c)
	{
		dest[c] = src[c];
		c++;
	}
	if (size - c > 0)
		dest[c] = '\0';
	return (ft_strlen(src));
}
