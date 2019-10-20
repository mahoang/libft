/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:36:18 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/18 14:31:33 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long c;
	unsigned long d;

	c = 0;
	d = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[c] && len != 0)
	{
		while (needle[d] == haystack[c + d] && len >= d)
		{
			d++;
			if ((needle[d]) == '\0')
				return ((char*)&haystack[c]);
		}
		d = 0;
		c++;
		len--;
	}
	return (0);
}
