/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:07:56 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 12:29:42 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*ssrc;
	unsigned char		*ddst;
	size_t				c;

	if (!dst && !src)
		return (NULL);
	c = 0;
	ssrc = (const unsigned char *)src;
	ddst = (unsigned char *)dst;
	while (c < n)
	{
		ddst[c] = ssrc[c];
		c++;
	}
	return (dst);
}
