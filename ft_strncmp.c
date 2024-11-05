/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:59:25 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:37:15 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares at most `n` characters of the strings `s1` and `s2`.
 *
 * The `ft_strncmp` function compares at most `n` 
 * characters of the strings `s1` and `s2`.
 * It returns an integer less than, equal to, 
 * or greater than zero if the first `n` characters
 * of `s1` are found, respectively, to be less than, 
 * to match, or be greater than the first `n`
 * characters of `s2`.
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater 
 * than zero if the first `n` characters of
 * `s1` are found, respectively, to be less than, 
 * to match, or be greater than the first `n`
 * characters of `s2`.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
