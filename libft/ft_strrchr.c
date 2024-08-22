/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:42:42 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:42:44 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*lastpos;
	int		i;

	lastpos = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			lastpos = (char *)&s[i];
		i++;
	}
	if ((char) c == s[i])
		return ((char *)&s[i]);
	return (lastpos);
}
