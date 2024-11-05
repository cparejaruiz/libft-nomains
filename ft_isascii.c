/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:53:47 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:17:08 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a given character is an ASCII character.
 *
 * This function tests whether the given character (represented as an integer)
 * falls within the ASCII character set, which includes characters with values
 * from 0 to 127 inclusive.
 *
 * @param c The character to be tested, represented as an integer.
 * @return Non-zero value if the character is an ASCII character, 0 otherwise.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
