/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:01:10 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/26 13:51:25 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_str(const char *s, char sep)
{
	int	c;
	int	d;

	c = 0;
	d = 0;
	while (s[c])
	{
		while (s[c] && s[c] == sep)
			c++;
		if (s[c] && s[c] != sep)
			d++;
		while (s[c] && s[c] != sep)
			c++;
	}
	return (d);
}

static	char	*malloc_w(const char *s, char sep)
{
	int		c;
	char	*temp;

	c = 0;
	while (s[c] && s[c] != sep)
		c++;
	if (!(temp = malloc(sizeof(char) * (c + 1))))
		return (0);
	c = 0;
	while (s[c] && s[c] != sep)
	{
		temp[c] = s[c];
		c++;
	}
	temp[c] = '\0';
	return (temp);
}

static	void	*ft_free(int c, char **splitted)
{
	while (--c >= 0)
		free(splitted[c]);
	free(splitted);
	return (NULL);
}

char			**ft_split(const char *s, char sep)
{
	int		c;
	char	**splitted;

	if (!(s))
		return (NULL);
	c = count_str(s, sep);
	if (!(splitted = (malloc(sizeof(char*) * (c + 1)))))
		return (0);
	c = 0;
	while (*s)
	{
		while (*s && *s == sep)
			s++;
		if (*s && *s != sep)
		{
			if (!(splitted[c] = malloc_w(s, sep)))
				ft_free(c, splitted);
			c++;
			while (*s && *s != sep)
				s++;
		}
	}
	splitted[c] = 0;
	return (splitted);
}
