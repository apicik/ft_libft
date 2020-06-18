/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:38:48 by ediego            #+#    #+#             */
/*   Updated: 2019/09/16 19:01:15 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		lenint(int n)
{
	int resl;
	int tmp;

	resl = 0;
	tmp = n;
	while (tmp != 0)
	{
		if (tmp < 0 && (tmp / 10) == 0)
			resl++;
		tmp /= 10;
		resl++;
	}
	if (n == 0)
		resl = 1;
	return (resl);
}

static char		*mulka(int l, int n)
{
	char	*resm;

	resm = ft_strnew(l);
	if (!resm)
		return (NULL);
	if (n < 0)
		resm[0] = '-';
	if (n == 0)
		resm[0] = '0';
	if (n == -2147483648)
		ft_strcpy(resm, "-2147483648");
	return (resm);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*res;
	int		i;

	len = lenint(n);
	res = mulka(len, n);
	if (!res)
		return (NULL);
	if (n < 0)
		n *= -1;
	i = 0;
	while (i < len && n > 0)
	{
		res[len - i - 1] = '0' + (n % 10);
		n /= 10;
		i++;
	}
	res[len] = '\0';
	return (res);
}
