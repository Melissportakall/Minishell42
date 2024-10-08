/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:38:09 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:38:11 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	i;

	mem = malloc(count * size);
	if (mem == 0)
		return (0);
	i = 0;
	while (i < count * size)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *) mem);
}
