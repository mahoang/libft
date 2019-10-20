/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:55:54 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/16 17:19:38 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	c;
	char			*dest;

	c = 0;
	if (s)
	{
		if (!(dest = malloc(sizeof(char*) * (ft_strlen(s) + 1))))
			return (NULL);
		while (s[c] != '\0')
		{
			dest[c] = f(c, s[c]);
			c++;
		}
		dest[c] = '\0';
		return (dest);
	}
	return (NULL);
}
