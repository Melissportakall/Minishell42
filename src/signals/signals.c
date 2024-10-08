/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:51:14 by mportaka          #+#    #+#             */
/*   Updated: 2024/08/22 15:55:56 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include "../../header/minishell.h"

static void	sig_handler(int sig)
{
	if (sig == SIGINT)
	{
		if (g_signal == FT_SIGHEREDOC)
		{
			exit(FT_SIGEXIT);
		}
		else
		{
			exit_variable_update(EXIT_SET, 1, 0);
			printf("\n");
			rl_on_new_line();
			rl_replace_line("", 0);
			rl_redisplay();
		}
	}
}

void	sig_controller(void)
{
	signal(SIGINT, sig_handler);
	signal(SIGQUIT, SIG_IGN);
}
