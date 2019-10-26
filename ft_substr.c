/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:06:50 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/26 14:03:01 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	(void)ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}
