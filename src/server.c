/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:06:29 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/10/04 15:44:14 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static t_message	g_message;

void	bit_management(int bit)
{
	g_message.character <<= 1;
	g_message.character |= bit == SIGUSR2;
	g_message.length++;
}

int	main(void)
{
	ft_printf("actual PID : %i\n", getpid());
	signal(SIGUSR1, bit_management);
	signal(SIGUSR2, bit_management);
	while (1)
	{
		pause();
		if (g_message.length == 8)
		{
			if (g_message.character != '\0')
				write(1, &g_message.character, 1);
			else
				write(1, "\n", 1);
			g_message.length = 0;
		}
	}
}
