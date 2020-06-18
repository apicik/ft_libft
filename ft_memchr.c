/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:58:45 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 12:27:38 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	sym;
	unsigned int	i;

	i = 0;
	sym = c;
	ss = (unsigned char *)s;
	while (i < n)
	{
		if (ss[i] == sym)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}
