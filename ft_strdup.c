/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:18:21 by ediego            #+#    #+#             */
/*   Updated: 2019/09/09 13:36:41 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*dup;
	unsigned int	s;

	s = 0;
	while (s1[s])
		s++;
	s++;
	dup = (char*)malloc(sizeof(char) * s);
	s = 0;
	if (!dup)
		return (0);
	while (s1[s])
	{
		dup[s] = s1[s];
		s++;
	}
	dup[s] = '\0';
	return (dup);
}
