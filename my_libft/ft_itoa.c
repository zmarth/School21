/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 23:19:22 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/26 13:15:07 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_nblen(long nb, int sign)
{
	unsigned int nb_len;

	nb_len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		nb_len++;
	}
	if (sign == -1)
		nb_len++;
	return (nb_len);
}

static void			convert_len(char *str, long nb, unsigned int nb_len,
						int sign)
{
	str[nb_len] = '\0';
	str[--nb_len] = nb % 10 + '0';
	nb /= 10;
	while (nb > 0)
	{
		str[--nb_len] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char				*ft_itoa(int n)
{
	char			*str;
	long			nb;
	unsigned int	nb_len;
	int				sign;

	sign = 1;
	if (n < 0)
	{
		nb = (long)n * -1;
		sign = -1;
	}
	else
		nb = n;
	nb_len = ft_nblen(nb, sign);
	if (!(str = malloc(sizeof(char) * nb_len + 1)))
		return (NULL);
	convert_len(str, nb, nb_len, sign);
	return (str);
}
