/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:41:39 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:41:41 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*new_arr;
	size_t	arr_len;
	size_t	i;

	arr_len = ft_strlen(s1);
	new_arr = (char *) malloc((arr_len + 1) * sizeof(char));
	if (new_arr == 0)
		return (NULL);
	i = 0;
	while (i < arr_len)
	{
		new_arr[i] = s1[i];
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
