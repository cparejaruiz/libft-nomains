/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:26:33 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:47:31 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The `ft_memcmp` function compares 
 * the first `n` bytes of memory areas `s1` and `s2`.
 *
 * The `ft_memcmp` function compares the first
 *  `n` bytes of memory areas `s1` and `s2`.
 * It returns an integer less than, equal to, 
 * or greater than zero if the first `n` bytes
 * of `s1` are found, respectively, to be 
 * less than, to match, or be greater than the first
 * `n` bytes of `s2`.
 *
 * @param s1 The first memory area to be compared.
 * @param s2 The second memory area to be compared.
 * @param n The number of bytes to be compared.
 * @return An integer less than, equal to, or greater
 *  than zero if the first `n` bytes of
 * `s1` are found, respectively, to be less than, 
 * to match, or be greater than the first `n`
 * bytes of `s2`.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}
