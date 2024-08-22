/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:51:42 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:51:45 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/minishell.h"

int	counter_command(t_cmd **commands)
{
	int	k;

	k = 0;
	while (commands[k])
		k++;
	return (k);
}

int	counter_content(t_cmd *cmd)
{
	int	k;

	k = 0;
	while (cmd->content && cmd->content[k].content)
		k++;
	return (k);
}

int	counter_flag(t_cmd *cmd)
{
	int	count;

	count = 0;
	while (cmd->flags_array && cmd->flags_array[count])
		count++;
	return (count);
}
