/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:59:55 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 12:55:34 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	ind1;
	size_t	ind2;
	size_t	len;
	char	*res;

	if (!s)
		return (NULL);
	ind1 = 0;
	ind2 = 0;
	len = ft_strlen(s);
	while (ISTR(s[ind1]))
		ind1++;
	while (ISTR(s[len - ind2 - 1]) && ind2 < len)
		ind2++;
	if (ind2 == 0)
		len = len - ind1;
	else if (ind1 == len)
		len = 0;
	else
		len = len - ind2 - ind1;
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	ft_strncat(res, &s[ind1], len);
	return (res);
}
