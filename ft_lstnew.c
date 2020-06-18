/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:36:04 by ediego            #+#    #+#             */
/*   Updated: 2019/09/17 15:24:48 by ediego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;

	new_list = (t_list*)ft_memalloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	if (!content)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		new_list->content = ft_memalloc(content_size);
		if (!new_list->content)
		{
			free(new_list);
			new_list = NULL;
		}
		ft_memcpy(new_list->content, content, content_size);
		new_list->content_size = content_size;
		new_list->next = 0;
	}
	return (new_list);
}
