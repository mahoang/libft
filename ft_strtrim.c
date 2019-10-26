/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:37:09 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/22 16:15:39 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_set_b(char const *s1, char const *set)
{
	size_t			c;
	size_t			d;

	c = 0;
	d = 0;
	while (d <= ft_strlen(set) && c < ft_strlen(s1))
	{
		while ((s1)[c] == set[d])
		{
			c++;
			d = 0;
		}
		d++;
	}
	return (c);
}

static	size_t	ft_count_set_e(char const *s1, char const *set, size_t c)
{
	size_t			d;
	size_t			e;

	e = 0;
	d = ft_strlen(s1);
	while (e <= ft_strlen(set))
	{
		while ((s1)[d] == set[e])
		{
			d--;
			e = 0;
		}
		e++;
	}
	d = ft_strlen(s1) - d;
	e = ft_strlen(s1) - c - d + 1;
	return (e);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t			e;
	size_t			c;
	char			*result;

	if (!(s1 && set))
		return (NULL);
	e = 0;
	c = ft_count_set_b(s1, set);
	if (c == ft_strlen(s1))
	{
		if (!(result = malloc(sizeof(char))))
			return (NULL);
		*result = '\0';
		return (result);
	}
	e = ft_count_set_e(s1, set, c);
	if (!(result = malloc(sizeof(char) * (e + 1))))
		return (NULL);
	ft_memcpy(result, s1 + c, e);
	(result)[e] = '\0';
	return (result);
}
