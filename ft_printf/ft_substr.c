/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:10:35 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/26 19:45:13 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	l;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	l = ft_strlen(s + start);
	l = l >= len ? len : l;
	if ((arr = (char *)malloc((l + 1) * sizeof(char))))
		ft_strlcpy(arr, s + start, l + 1);
	return (arr);
}
