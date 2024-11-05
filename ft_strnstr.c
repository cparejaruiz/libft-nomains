/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:51:54 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:24:29 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of the null-terminated string `little` in the
 * string `big`, where not more than `len` characters are searched.
 *
 * The `ft_strnstr` function locates the first occurrence of the null-terminated
 * string `little` in the string `big`, where not more than `len` characters are
 * searched. Characters that appear after a `\0' character are not searched.
 *
 * @param big The string to be searched.
 * @param little The string to search for.
 * @param len The maximum number of characters to search.
 * @return A pointer to the first occurrence of `little` in `big`, or `NULL` if
 * `little` is not found in `big`.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big && len == 0)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (i + j < len && big[i + j] == little[j]
				&& little[j] != '\0')
				j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}
