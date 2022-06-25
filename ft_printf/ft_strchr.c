/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 22:17:09 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/26 17:03:08 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*a;

	a = (char*)str;
	while (*a != '\0')
	{
		if (*a == c)
			return (a);
		a++;
	}
	if (*a == '\0' && c == '\0')
		return (a);
	return (a = NULL);
}
