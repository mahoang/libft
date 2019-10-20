/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:57:13 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/18 14:07:12 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dest;
	char *ssrc;

	ssrc = (char*)src;
	if (!(dest = malloc(sizeof(*src) * ft_strlen(src) + 1)))
		return (NULL);
	ft_strcpy(dest, ssrc);
	return (dest);
}
