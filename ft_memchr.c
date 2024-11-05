/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:56:14 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:46:19 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The `ft_memchr` function locates the first occurrence of `c` (converted to an
 * unsigned char) in string `s`.
 *
 * The `ft_memchr` function locates the first occurrence of `c` (converted to an
 * unsigned char) in string `s`. The search is limited to the first `n` bytes of
 * the string, and the function returns a pointer to the matching byte or `NULL`
 * if the character does not occur in the given memory area.
 *
 * @param s The memory area to be searched.
 * @param c The character to be located.
 * @param n The number of bytes to be searched.
 * @return A pointer to the matching byte or
 *  `NULL` if the character is not found.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char) c)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
