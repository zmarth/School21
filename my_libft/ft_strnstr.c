/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 22:17:33 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/26 12:09:12 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	n;
	size_t			little_len;

	n = 0;
	little_len = ft_strlen(needle);
	if (*needle == '\0')
		return (char*)(haystack);
	while (*haystack != '\0')
	{
		if (n + little_len > len)
			return (NULL);
		if (ft_strncmp(haystack, needle, little_len) == 0)
			return (char*)(haystack);
		haystack++;
		n++;
	}
	return (NULL);
}
