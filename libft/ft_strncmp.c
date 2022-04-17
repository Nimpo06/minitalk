/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:55:24 by mayoub            #+#    #+#             */
/*   Updated: 2021/10/27 18:14:08 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	while ((ss1[i] != '\0' && ss2[i] != '\0') && (ss1[i] == ss2[i]) && (i < n))
		i++;
	if (s1[i] == ss2[i] || i == n)
		return (0);
	return (ss1[i] - ss2[i]);
}
