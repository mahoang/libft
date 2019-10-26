/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 13:04:27 by mahoang           #+#    #+#             */
/*   Updated: 2019/10/22 15:08:56 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	if (!(result = malloc(size * count)))
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}
