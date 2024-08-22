/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:38:02 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:38:04 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*sb;

	if (n == 0)
		return ;
	sb = s;
	i = 0;
	while (i < n)
	{
		sb[i] = 0;
		i++;
	}
}
