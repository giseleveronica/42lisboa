/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:25:37 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 16:11:34 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	char	*copy;

	if (!s1)
		return (NULL);
	x = 0;
	y = 0;
	copy = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!copy)
		return (NULL);
	while (s1[x])
	{
		copy[x] = ((char *)s1)[x];
		x++;
	}
	while (s2[y])
	{
		copy[x] = ((char *)s2)[y++];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}
