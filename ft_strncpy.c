/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:27:49 by ediego            #+#    #+#             */
/*   Updated: 2019/09/08 15:36:50 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char			*fp;
	unsigned int	c;

	c = 0;
	fp = dst;
	while (*src != '\0' && c < len)
	{
		*dst = *src;
		dst++;
		src++;
		c++;
	}
	while (c < len)
	{
		*dst = '\0';
		dst++;
		c++;
	}
	return (fp);
}
