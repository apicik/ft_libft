/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:49:41 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 12:31:06 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*ssrc;
	unsigned char		*ddst;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	ddst = (unsigned char *)dst;
	ssrc = (const unsigned char *)src;
	if (ssrc < ddst)
		while (len > 0)
		{
			len--;
			ddst[len] = ssrc[len];
		}
	else
		while (i < len)
		{
			ddst[i] = ssrc[i];
			i++;
		}
	return (ddst);
}
