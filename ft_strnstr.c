/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:06:47 by ediego            #+#    #+#             */
/*   Updated: 2019/09/18 04:01:35 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i1;
	size_t i2;
	size_t lend;

	i1 = 0;
	i2 = 0;
	lend = ft_strlen(needle);
	if (needle[i2] == '\0')
		return (char *)(&haystack[i1]);
	while (haystack[i1] && (i1 <= (len - lend)))
	{
		if (len < lend)
			return (NULL);
		if (needle[i2] == haystack[i1])
			if (ft_strncmp(&haystack[i1], &needle[i2], lend) == 0)
				return (char *)(&haystack[i1]);
		i1++;
	}
	return (NULL);
}
