/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:51:27 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:51:30 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/minishell.h"
#include "../../libft/libft.h"

int	err_print_command_not_found(char *command)
{
	ft_putstr_fd("\033[31m", 2);
	ft_putstr_fd("minishell", 2);
	ft_putstr_fd("\033[0m: ", 2);
	ft_putstr_fd(command, 2);
	ft_putstr_fd(": command not found\n", 2);
	return (FAILURE);
}

int	err_print(char *error_type)
{
	ft_putstr_fd("\033[31m", 2);
	ft_putstr_fd("minishell", 2);
	ft_putstr_fd("\033[0m: ", 2);
	ft_putstr_fd(error_type, 2);
	ft_putstr_fd("\n", 2);
	return (FAILURE);
}
