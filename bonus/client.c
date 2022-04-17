/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:33:56 by sihemayoub        #+#    #+#             */
/*   Updated: 2022/04/16 15:30:06 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_message(int pid, char *my_message, size_t message_len)
{
	size_t	i;
	int		shift;

	i = 0;
	while (i <= message_len)
	{
		shift = 0;
		while (shift < 7)
		{
			if((my_message[i] >> shift) & 1)
				kill(pid, SIGUSR2);
			else	
				kill(pid, SIGUSR1);
			shift++;
			usleep(70);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		send_message(pid, argv[2], ft_strlen(argv[2]));
	}
	else
		ft_putstr("please tape : ./client <Server : PID> <Your message>\n");
	return(0);
}
