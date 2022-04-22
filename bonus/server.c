/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:06:29 by sihemayoub        #+#    #+#             */
/*   Updated: 2022/04/22 15:01:13 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static t_message	g_message;

void	bit_management(int bit)
{
	g_message.character += ((bit & 1) << g_message.size);
	g_message.size++;
	if (g_message.size == 7)
	{
		ft_putchar(g_message.character);
		if (!g_message.character)
			ft_putchar('\n');
		g_message.character = 0;
		g_message.size = 0;
	}
}

int	main(void)
{
	int	pid;
	int	bit;

	bit = 0;
	pid = getpid();
	ft_putstr("actual PID : ");
	ft_putnbr(pid);
	ft_putchar('\n');
	while (1)
	{
		signal(SIGUSR2, bit_management);
		signal(SIGUSR1, bit_management);
		pause();
	}
}
