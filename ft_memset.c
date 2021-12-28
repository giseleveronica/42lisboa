/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveronic <gveronic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:35:56 by gveronic          #+#    #+#             */
/*   Updated: 2021/12/28 15:38:28 by gveronic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem_loc, int c, size_t n)
{
	size_t	x;
	char	*aux;

	aux = mem_loc;
	x = 0;
	while (x < n)
		aux[x++] = c;
	return (aux);
}
