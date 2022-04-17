/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:10:13 by mayoub            #+#    #+#             */
/*   Updated: 2021/11/03 18:37:13 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(char *s, size_t n)
{
	char		*m;
	size_t		i;

	m = malloc(n + 1);
	if (!m)
		return (NULL);
	i = 0;
	while (i < n)
	{
		m[i] = s[i];
		i++;
	}
	m[i] = 0;
	return (m);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (!s)
		return (0);
	if (start >= ft_strlen((char *) s) || !s)
		return (ft_calloc(1, 1));
	if (start + len > ft_strlen((char *) s))
		return (ft_strdup((char *) &s[start]));
	return (ft_strndup((char *) &s[start], len));
}
