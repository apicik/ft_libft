/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:47:57 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 13:15:36 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char const	*ss1;
	char const	*ss2;
	int			res;

	res = 0;
	if (s1 && s2)
	{
		ss1 = s1;
		ss2 = s2;
		while ((*ss1 && *ss2) && *ss1 == *ss2)
		{
			ss1++;
			ss2++;
		}
		if (*ss1 == 0 && *ss2 == 0)
			res = 1;
	}
	return (res);
}
