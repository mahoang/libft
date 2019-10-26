/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 21:16:58 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/23 21:32:29 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	unsigned int c;
	unsigned int d;

	c = 0;
	d = 0;
	if (n == 0)
		return (dest);
	while (dest[c])
		c++;
	while (src[d] && d < n)
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
