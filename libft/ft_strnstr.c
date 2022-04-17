/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:18:03 by mayoub            #+#    #+#             */
/*   Updated: 2021/10/27 16:34:02 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*resultat;

	i = 0;
	resultat = (char *) haystack;
	if (ft_strlen(needle) == 0 || haystack == needle)
		return (resultat);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (resultat[i + j] == needle[j] && resultat[i + j] != '\0'
			&& needle[j] != '\0' && i + j < len)
			j++;
		if (j == ft_strlen(needle))
			return (resultat + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strnstr("bonjour", "bon", 3));
}
*/