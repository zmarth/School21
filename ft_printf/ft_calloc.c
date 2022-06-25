/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 01:10:22 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/12 07:47:59 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char*)malloc(num * size);
	if (!dest)
		return (NULL);
	while (i < num * size)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
