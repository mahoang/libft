/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:05:18 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/11 19:39:41 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s3;
	size_t			c;

	c = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	c = ft_strlen(s1) + ft_strlen(s2);
	if (!(s3 = malloc(sizeof(*s3) * (c + 1))))
		return (NULL);
	ft_strcpy(s3, s1);
	ft_strcat(s3, s2);
	return (s3);
}
