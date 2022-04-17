/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:06:29 by sihemayoub        #+#    #+#             */
/*   Updated: 2022/04/16 15:31:35 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static t_message message;

void	bit_management(int bit)
{
	message.character += ((bit & 1) << message.size);
	//printf("c = %d, size = %d, bit = %d", message.character, message.size, bit);
	message.size++;
	if(message.size == 7)
	{
		ft_putchar(message.character);
		if (!message.character)
			ft_putchar('\n');
		message.character = 0;
		message.size = 0;
	}
}

int	main()
{
	int pid;
	int bit;

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
