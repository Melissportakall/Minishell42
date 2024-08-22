/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:40:46 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:40:49 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstch;
	unsigned char	*srcch;

	if (dst == src || !len)
		return (dst);
	else if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		i = len;
		dstch = (unsigned char *) dst;
		srcch = (unsigned char *) src;
		while (i > 0)
		{
			dstch[i - 1] = srcch[i - 1];
			i--;
		}
	}
	return (dst);
}
