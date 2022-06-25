/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:53:14 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/27 15:43:19 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*b;

	if (!lst || !f)
		return (NULL);
	if (!(a = ft_lstnew(f(lst->content))))
		return (NULL);
	b = a;
	lst = lst->next;
	while (lst)
	{
		if (!(a = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&b, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&b, a);
	}
	a->next = NULL;
	return (b);
}
