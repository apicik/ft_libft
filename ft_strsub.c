/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:57:55 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 13:05:13 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *res;

	if (!s)
		return (NULL);
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	res = ft_strncpy(res, &(s[start]), len);
	return (res);
}
