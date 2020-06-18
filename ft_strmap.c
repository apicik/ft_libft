/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:13:11 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 12:49:53 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		res[ind] = (*f)(s[ind]);
		ind++;
	}
	return (res);
}
