/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:42:22 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:42:24 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*n_str;
	unsigned int		i;

	i = 0;
	n_str = ft_strdup(s);
	if (!n_str)
		return (0);
	while (s[i])
	{
		n_str[i] = f(i, s[i]);
		i++;
	}
	return (n_str);
}
