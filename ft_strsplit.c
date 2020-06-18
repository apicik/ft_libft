/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:37:15 by ediego            #+#    #+#             */
/*   Updated: 2019/09/18 05:31:09 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lenarrp(char const *str, char c, size_t wrd)
{
	if (*str != c && *str)
		wrd++;
	while (*str)
	{
		if (*str == c && *(str + 1) != c && *(str + 1))
			wrd++;
		str++;
	}
	return (wrd);
}

static int		ft_mulka(char **arr, const char *str, char c, size_t lenap)
{
	size_t lenc;

	lenc = 0;
	if (lenap == 0 && !(*arr = ft_strnew(0)))
		return (0);
	while (lenap > 0)
	{
		while (*str == c && *str)
			str++;
		while (*str != c)
		{
			lenc++;
			str++;
		}
		*arr = ft_strnew(lenc);
		if (!*arr)
			return (0);
		lenc = 0;
		lenap--;
		arr++;
	}
	return (1);
}

static void		ft_inarr(char **arr, const char *str, char c, size_t lenap)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	while (lenap > 0)
	{
		while (*str == c && *str)
			str++;
		while (*str != c && *str)
		{
			arr[i][k] = *str;
			k++;
			str++;
		}
		arr[i][k++] = '\0';
		k = 0;
		i++;
		lenap--;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	lenap;
	char	**arrpnt;

	lenap = 0;
	if (!s)
		return (NULL);
	lenap = ft_lenarrp(s, c, lenap);
	if (!(arrpnt = ((char**)malloc((lenap + 1) * sizeof(char*)))))
		return (NULL);
	if (!ft_mulka(arrpnt, s, c, lenap))
	{
		lenap = 0;
		while (arrpnt[lenap])
		{
			ft_strdel(&arrpnt[lenap]);
			lenap++;
		}
		ft_memdel((void **)&arrpnt);
		return (NULL);
	}
	ft_inarr(arrpnt, s, c, lenap);
	arrpnt[lenap] = NULL;
	return (arrpnt);
}
