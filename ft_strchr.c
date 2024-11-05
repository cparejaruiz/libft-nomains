/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:27:31 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:52:07 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The `ft_strchr` function locates the first occurrence of `c` (converted to a
 * char) in the string `s`.
 *
 * The `ft_strchr` function locates the first occurrence of `c` (converted to a
 * char) in the string `s`. The terminating null character is considered to be
 * part of the string, and therefore can be found when searching for '\0'.
 *
 * @param s The string to be searched.
 * @param c The character to be located.
 * @return A pointer to the located character or `NULL` if the character does not
 * occur in the string.
 */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (NULL);
}
