/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:05:12 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 14:06:03 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	sign;
	int	number;

	x = 0;
	sign = 1;
	number = 0;
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\r'
		|| str[x] == '\n' || str[x] == '\v' || str[x] == '\f')
		x++;
	if (str[x] == '-' || str[x] == '+')
		if (str[x++] == '-')
			sign = -1;
	while (str[x] >= 48 && str[x] <= 57)
		number = (number * 10) + (str[x++] - '0');
	return (number * sign);
}
