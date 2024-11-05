/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:17:53 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:20:26 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The `ft_memset` function fills the first `n` bytes of the memory area
 * pointed to by `str` with the constant byte `c`.
 *
 * The `ft_memset` function fills the first `n` bytes of the memory area
 * pointed to by `str` with the constant byte `c`. It returns a pointer to
 * the memory area `str`.
 *
 * @param str Pointer to the memory area to be filled.
 * @param c The byte to be set.
 * @param n Number of bytes to be set to the value.
 * @return A pointer to the memory area `str`.
 */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (str);
}
