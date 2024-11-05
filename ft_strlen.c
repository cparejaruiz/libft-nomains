/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:39:00 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:24:00 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the length of the string `s`, excluding the terminating null byte.
 *
 * The `ft_strlen` function calculates the length of the string `s`, excluding
 * the terminating null byte ('\0').
 *
 * @param s The string whose length is to be found.
 * @return The number of characters in the string `s`.
 */

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
