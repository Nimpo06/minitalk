/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:33:56 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/10/04 15:40:40 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_message(int pid, unsigned char * message, size_t length)
{
	size_t	i;
	int		shift;

	i = 0;
	while (i <= length)
	{
		shift = 8;
		while (shift--)
		{
			if ((message[i] >> shift) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(500);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		send_message(ft_atoi(argv[1]), (unsigned char *) argv[2], ft_strlen(argv[2]));
	else
		ft_printf("please tape : ./client <Server : PID> <Your message>\n");
	return (0);
}
