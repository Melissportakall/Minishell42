/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:43:57 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:43:59 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/minishell.h"
#include "../../libft/libft.h"

int	ft_env(t_env *env)
{
	int	i;

	i = 0;
	while (env && env[i].name)
	{
		if (env[i].value && env[i].value[0] == 0)
		{
			ft_putstr_fd(env[i].name, 1);
			ft_putstr_fd("=", 1);
			ft_putstr_fd("\n", 1);
		}
		else if (env[i].value && env[i].value[0] != '\0')
		{
			ft_putstr_fd(env[i].name, 1);
			ft_putstr_fd("=", 1);
			ft_putstr_fd(env[i].value, 1);
			ft_putstr_fd("\n", 1);
		}
		i++;
	}
	return (0);
}
