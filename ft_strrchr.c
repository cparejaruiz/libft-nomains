/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:55:02 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:56:48 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The `ft_strrchr` function locates the last occurrence of `c` (converted to an
 * unsigned char) in string `s`.
 *
 * The `ft_strrchr` function locates the last occurrence of `c` (converted to an
 * unsigned char) in string `s`. The search is limited to the first `n` bytes of
 * the string, and the function returns a pointer to the matching byte or `NULL`
 * if the character does not occur in the given memory area.
 *
 * @param s The memory area to be searched.
 * @param c The character to be located.
 * @return A pointer to the matching byte or `NULL` 
 * if the character is not found.
 */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	const char		*last_occurrence;

	ch = (unsigned char)c;
	last_occurrence = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == ch)
			last_occurrence = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}
