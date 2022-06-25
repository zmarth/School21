/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmarth <zmarth@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 00:19:07 by zmarth            #+#    #+#             */
/*   Updated: 2020/11/26 20:20:20 by zmarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int						i;
	int						sign;
	unsigned long long		res;

	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		str++;
	if (str[0] == '-')
		sign = -1;
	else
		sign = 1;
	if (str[0] == '-' || str[0] == '+')
		str = str + 1;
	while (str[0] == '0')
		str++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (i > 19 || res >= 9223372036854775807)
		return (sign == 1 ? -1 : 0);
	return (sign * res);
}
