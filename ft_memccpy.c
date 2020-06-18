/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:00:49 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 12:38:14 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	sym;
	unsigned char	*ssrc;
	unsigned char	*ddst;
	unsigned int	i;

	i = 0;
	ssrc = (unsigned char *)src;
	ddst = (unsigned char *)dst;
	sym = c;
	while (i < n)
	{
		ddst[i] = ssrc[i];
		if (sym == ssrc[i])
			return (ddst + (i + 1));
		i++;
	}
	return (NULL);
}
