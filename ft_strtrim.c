/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:29:31 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 16:11:54 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	settrue(char c, char *set)
{
	int	x;

	x = 0;
	while (set[x])
	{
		if (c == set[x])
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		x;
	int		begin;
	int		end;
	char	*string;

	if (!s1)
		return (NULL);
	x = 0;
	begin = 0;
	end = ft_strlen(s1) - 1;
	string = (char *)s1;
	while (string[x] && settrue(string[x++], (char *)set))
		begin++;
	while (string[end] && settrue(string[end], (char *)set) && end > begin)
		end--;
	string = ft_substr(string, begin, end + 1 - begin);
	return (string);
}
