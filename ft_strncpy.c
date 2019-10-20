/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 21:07:02 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/11 21:15:26 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t c;

	c = 0;
	while (len > 0 && src[c])
	{
		dest[c] = src[c];
		c++;
		len--;
	}
	while (len > 0)
	{
		dest[c] = '\0';
		c++;
		len--;
	}
	return (dest);
}
