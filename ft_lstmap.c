/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:44:52 by ediego            #+#    #+#             */
/*   Updated: 2019/09/18 05:46:40 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		f_del(void *content, size_t content_size)
{
	content_size = 0;
	ft_memdel(&content);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *begin;
	t_list *current;

	if (!lst || !f)
		return (NULL);
	begin = f(lst);
	if (!begin)
		return (NULL);
	current = begin;
	while (lst->next)
	{
		lst = lst->next;
		current->next = f(lst);
		if (!current->next)
		{
			ft_lstdel(&begin, &f_del);
			return (NULL);
		}
		current = current->next;
	}
	return (begin);
}
