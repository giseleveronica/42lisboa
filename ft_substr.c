/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:29:38 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 14:29:39 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	size_substring;
	char	*substring;

	x = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		size_substring = 0;
	else if (ft_strlen(s) <= len)
		size_substring = ft_strlen(s) - start;
	else
		size_substring = len;
	substring = malloc(sizeof(char) * size_substring + 1);
	while (x < size_substring)
	{
		substring[x] = s[start];
		x++;
		start++;
	}
	substring[x] = '\0';
	return (substring);
}
