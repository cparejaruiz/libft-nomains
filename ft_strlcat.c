/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:16:35 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:36:43 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Appends the NUL-terminated string `src` to the end of `dest`.
 *
 * The `ft_strlcat` function appends the NUL-terminated string `src` to the end
 * of `dest`. It will append at most `dstsize - strlen(dest) - 1` characters.
 * It will then NUL-terminate, unless `dstsize` is 0 or the original `dest`
 * string was longer than `dstsize`.
 *
 * @param dest The destination string.
 * @param src The source string.
 * @param dstsize The size of the destination buffer.
 * @return The total length of the string that would have been created if there
 * were no size constraint.
 */

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (dstsize == 0 || dstsize <= len_dest)
		return (dstsize + len_src);
	while (i + len_dest < dstsize - 1 && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	if (len_dest + i < dstsize)
		dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
