/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_add_flag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:50:33 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:50:35 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/minishell.h"
#include "../../libft/libft.h"

char	**add_flag(char **flags, char *flag)
{
	char	**new_flags;
	int		i;

	i = 0;
	while (flags && flags[i])
		i++;
	new_flags = malloc(sizeof(char *) * (i + 2));
	if (!new_flags)
		return (NULL);
	i = 0;
	while (flags && flags[i])
	{
		new_flags[i] = flags[i];
		i++;
	}
	new_flags[i] = ft_strdup(flag);
	if (!new_flags[i])
	{
		free(new_flags);
		return (NULL);
	}
	new_flags[i + 1] = NULL;
	if (flags)
		free(flags);
	return (new_flags);
}
