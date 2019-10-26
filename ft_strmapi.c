/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:55:54 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/21 10:02:09 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	c;
	char			*dest;

	c = 0;
	if (s && f)
	{
		if (!(dest = malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (NULL);
		while (c < ft_strlen((char *)s))
		{
			dest[c] = f(c, s[c]);
			if (s[c] != '\0')
				c++;
		}
		dest[c] = '\0';
		return (dest);
	}
	return (NULL);
}
