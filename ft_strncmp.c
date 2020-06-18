/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:36:11 by ediego            #+#    #+#             */
/*   Updated: 2019/09/18 02:48:38 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (n == 0 && ss1[i] != ss2[i])
		return (0);
	while (ss1[i] == ss2[i] && (i < (n - 1)) && ss1[i])
	{
		if (ss2[i] == '\0')
			return (0);
		i++;
	}
	return (ss1[i] - ss2[i]);
}
