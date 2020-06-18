/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:02:38 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 13:03:36 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	symbol;
	int		i;
	int		res;

	i = 0;
	symbol = c;
	res = i;
	while (s[i])
	{
		if (s[i + 1] == symbol)
			res = i + 1;
		i++;
	}
	if (s[res] == symbol)
		return (char *)&s[res];
	return (NULL);
}
