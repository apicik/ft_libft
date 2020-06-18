/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:30:56 by ediego            #+#    #+#             */
/*   Updated: 2019/09/16 06:13:51 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *newstr;

	if (s1 && s2)
	{
		newstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (newstr)
			return (ft_strcat(ft_strcat(newstr, s1), s2));
	}
	return (NULL);
}
