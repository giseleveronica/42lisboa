/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:25:27 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 14:25:28 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	x;
	char	*copy;

	x = 0;
	copy = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!copy)
		return (NULL);
	while (s1[x])
	{
		copy[x] = s1[x];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}
