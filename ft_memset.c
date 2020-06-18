/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:53:24 by ediego            #+#    #+#             */
/*   Updated: 2019/09/14 21:29:15 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;

	bb = (unsigned char *)b;
	while (len)
	{
		*bb = (unsigned char)c;
		bb++;
		len--;
	}
	return (b);
}
