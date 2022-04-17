/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 04:01:33 by mayoub            #+#    #+#             */
/*   Updated: 2021/10/29 12:38:22 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*k;

	i = 0;
	k = (char *) b;
	if (b == NULL)
		return (NULL);
	while (len != 0)
	{
		k[i] = (char) c;
		i++;
		len--;
	}
	return (k);
}
