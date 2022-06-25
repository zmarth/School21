/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:53:05 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/27 14:08:36 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *a;
	t_list *b;

	if (!lst || !del)
		return ;
	a = *lst;
	while (a)
	{
		b = a->next;
		del(a->content);
		free(a);
		a = b;
	}
	*lst = NULL;
}
