/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 11:44:19 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 12:41:08 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		ind;
	char	symba[12];

	ind = 0;
	if (n == 0)
		ft_putchar('0');
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		n = 0;
	}
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * (-1));
	}
	while (n > 0)
	{
		symba[ind++] = '0' + (n % 10);
		n = n / 10;
	}
	while (ind > 0)
		ft_putchar(symba[(ind--) - 1]);
}
