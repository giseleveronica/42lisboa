/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:25:16 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 16:31:17 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	tofind;

	tofind = c;
	while (*str)
	{
		if (*str == tofind)
			return ((char *)str);
		str++;
	}
	if (*str == tofind)
		return ((char *)str);
	return (NULL);
}
