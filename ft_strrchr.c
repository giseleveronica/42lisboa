/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:29:19 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 14:35:23 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	tofind;

	tofind = c;
	len = ft_strlen(str) - 1;
	if (!tofind)
		return ((char *)str + ft_strlen(str));
	while (len >= 0)
	{
		if (str[len] == tofind)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}
