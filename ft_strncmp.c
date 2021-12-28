/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:28:54 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 15:53:44 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	x;
	size_t	size;

	x = 0;
	size = ft_strlen(str1);
	if (ft_strlen(str2) > size)
		size = ft_strlen(str2);
	while (size-- > 0 && n > x)
	{
		if (str1[x] != str2[x])
			return ((unsigned char)str1[x] - (unsigned char)str2[x]);
		x++;
	}
	return (0);
}
