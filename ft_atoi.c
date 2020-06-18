/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:01:49 by ediego            #+#    #+#             */
/*   Updated: 2019/09/18 04:56:40 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iterspace(const char *s, int i)
{
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
				|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r'))
		i++;
	return (i);
}

int			ft_atoi(const char *s)
{
	int					i;
	unsigned long long	res;
	int					znak;

	znak = 0;
	res = 0;
	i = ft_iterspace(s, 0);
	if (s[i] == '-')
		znak = -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while ((s[i] >= 48 && s[i] <= 57) && s[i] != '\0')
	{
		res = (s[i] - '0') + (res * 10);
		i++;
		if (res - znak > 9223372036854775807)
			return (znak ? 0 : -1);
	}
	return ((int)res * (znak ? -1 : 1));
}
