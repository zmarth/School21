/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 01:10:02 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/12 07:38:31 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *src, size_t num)
{
	unsigned char		*dest;

	dest = (unsigned char*)src;
	while (num > 0)
	{
		*(dest++) = 0;
		num--;
	}
	src = dest;
}
