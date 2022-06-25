/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 01:48:18 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/26 17:35:09 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	i;
	size_t	sum;

	i = 0;
	if (!s1 || !s2)
		return (0);
	sum = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	if (!(arr = (char*)malloc(sizeof(char) * sum)))
		return (NULL);
	while (*s1 != '\0')
		arr[i++] = *s1++;
	while (*s2 != '\0')
		arr[i++] = *s2++;
	arr[i] = '\0';
	return (arr);
}
