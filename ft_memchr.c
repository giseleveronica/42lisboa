/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:06:55 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 14:36:17 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	x;
	char	*string;
	char	tofind;

	x = 0;
	string = (char *)str;
	tofind = c;
	while (x < n)
	{
		if (string[x] == tofind)
			return ((void *)(str + x));
		x++;
	}
	return (NULL);
}
