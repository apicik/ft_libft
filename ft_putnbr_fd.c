/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:09:59 by ediego            #+#    #+#             */
/*   Updated: 2019/09/15 12:42:02 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	s[12];

	i = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		n = 0;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * (-1), fd);
	}
	while (n > 0)
	{
		s[i++] = '0' + (n % 10);
		n = n / 10;
	}
	while (i > 0)
		ft_putchar_fd(s[(i--) - 1], fd);
}
