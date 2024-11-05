/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:43:28 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:37:41 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an uppercase letter to lowercase.
 *
 * This function converts an uppercase letter to lowercase. If the argument is
 * not an uppercase letter, the argument is returned unchanged.
 *
 * @param c The character to be converted.
 * @return The lowercase equivalent of the character, 
 * if any; otherwise the argument.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
