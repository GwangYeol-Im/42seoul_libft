/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 19:19:31 by gim               #+#    #+#             */
/*   Updated: 2020/09/30 19:42:50 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*temp;

	elem = ft_lstnew(f(lst->content));
	temp = elem->next;
	lst = lst->next;
	while (lst)
	{
		if (!(temp = ft_lstnew(f(lst->content))))
			ft_lstclear(&elem, del);
		temp = temp->next;
		lst = lst->next;
	}
	temp->next = NULL;
	return (elem);
}
