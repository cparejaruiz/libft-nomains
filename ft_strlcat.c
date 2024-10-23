/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:16:35 by carmen            #+#    #+#             */
/*   Updated: 2024/10/23 09:43:34 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dest;
	size_t	src_len;

	i = 0;
	size_dest = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (dstsize + src_len);
	if (dstsize <= size_dest)
		return (dstsize + src_len);
	while (i + size_dest < dstsize - 1 && src[i] != '\0')
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	if (size_dest + i < dstsize)
		dest[size_dest + i] = '\0';
	return (size_dest + src_len);
}
