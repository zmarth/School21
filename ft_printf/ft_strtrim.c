/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:11:18 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/26 20:04:49 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		size;

	size = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char*)s1);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (s1)
		size = ft_strlen(s1);
	while (s1 && ft_strchr(set, s1[size]) && size > 0)
		size--;
	dest = ft_substr(s1, 0, size + 1);
	return (dest);
}
