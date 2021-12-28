/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:07:20 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 14:36:09 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;

	if (dst == NULL && src == NULL && n != 0)
		return (NULL);
	x = 0;
	while (x < n)
	{
		*(unsigned char *)(dst + x) = *(unsigned char *)(src + x);
		x++;
	}
	return (dst);
}
