/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:59:24 by ediego            #+#    #+#             */
/*   Updated: 2019/09/18 16:24:52 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list *lst)
{
	t_list	*iter;
	size_t	count;

	if (!lst)
		return (0);
	count = 0;
	iter = lst;
	while (iter)
	{
		iter = iter->next;
		count++;
	}
	return (count);
}
