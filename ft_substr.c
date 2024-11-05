/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:21:54 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:59:29 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a substring from the string `s`.
 * The substring begins at index `start` and is of maximum size `len`.
 *
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string `s`.
 * @param len The maximum length of the substring.
 * @return The substring. `NULL` if the allocation fails.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		slen ;
	char		*substring;

	i = 0;
	j = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	substring = (char *) malloc ((len +1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		substring[j] = s[start + i];
		i++;
		j++;
	}
	substring[j] = '\0';
	return (substring);
}
