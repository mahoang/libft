/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blaw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:37:09 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/18 17:08:01 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

---
#include "libft.h"


#include <stdio.h>

int		main(void)
{
	char str[] = "lorem ipsum truc machin";
	char **tab = ft_split(str, ' ');
	while (*tab)
	{
		puts(*tab++);
	}
}

gcc -g3 -fsanitize=address ft_split.c && ./a.out


{
	int				counter;
	unsigned int	result;

	result = 0;
	while (src[result] != '\0')
		++result;
	counter = 0;
	while (src[counter] != '\0' && counter < ((int)size - 1))
	{
		dest[counter] = src[counter];
		++counter;
	}
	if (size)
		dest[counter] = '\0';
	return (result);
}

#include <string.h>
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    i = 0;
    while (*src && i + 1 < dstsize)
    {
        *dst++ = *src++;
        i++;
    }
    if (dstsize - i > 0)
    {
        *dst = '\0';
    }
    while (*src)
    {
        src++;
        i++;
    }
    return (i);
}


#include <string.h>
size_t    ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t    i;
    size_t    j;
    size_t    k;
    i = 0;
    j = 0;
    k = 0;
    while (dst[i] && i < dstsize)
        i++;
    if (i < dstsize)
    {
        k = i;
        while (src[j] && k + j < dstsize - 1)
            dst[i++] = src[j++];
        dst[i] = '\0';
        i = k;
    }
    while (src[j])
        j++;
    return (i + j);
}
