/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:31:30 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 13:05:33 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int i1;
	unsigned int i2;

	i1 = 0;
	i2 = 0;
	if (needle[i2] == '\0')
		return (char *)(&haystack[i1]);
	while (haystack[i1])
	{
		if (needle[i2] == haystack[i1])
			if (ft_strncmp(&haystack[i1], &needle[i2], ft_strlen(needle)) == 0)
				return (char *)(&haystack[i1]);
		i1++;
	}
	return (NULL);
}
