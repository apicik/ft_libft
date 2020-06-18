/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:07:53 by ediego            #+#    #+#             */
/*   Updated: 2019/09/17 18:44:55 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	ind;
	int		res;

	if (n == 0)
		return (1);
	res = 0;
	ind = 0;
	if (s1 && s2)
	{
		while (*s1 && ind < (n - 1) && *s1 == *s2)
		{
			s1++;
			s2++;
			ind++;
		}
		if (*s1 == *s2)
			res = 1;
	}
	return (res);
}
