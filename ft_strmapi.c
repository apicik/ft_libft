/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:22:56 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 12:49:24 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	ind;
	char	*res;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ind = 0;
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	while (ind < len)
	{
		res[ind] = (*f)(ind, s[ind]);
		ind++;
	}
	return (res);
}
