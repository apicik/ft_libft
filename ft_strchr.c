/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:27:27 by ediego            #+#    #+#             */
/*   Updated: 2019/09/09 22:06:52 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	symbol;
	int		i;

	i = 0;
	symbol = c;
	while (s[i])
	{
		if (s[i] == symbol)
			return (char *)&s[i];
		i++;
	}
	if (s[i] == symbol)
		return (char *)&s[i];
	return (NULL);
}
