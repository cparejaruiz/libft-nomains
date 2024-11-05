/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:49:13 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:43:34 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is alphanumeric.
 *
 * This function determines if the provided character is either a letter 
 * (uppercase or lowercase) or a digit. It returns a non-zero value if 
 * the character is alphanumeric, and zero if it is not.
 *
 * @param c The character to be checked.
 * @return Non-zero value if the character is alphanumeric, zero otherwise.
 */

int	ft_isalnum(int c)
{
	if (((c >= 'A') && (c <= 'Z'))
		|| ((c >= 'a') && (c <= 'z'))
		|| ((c >= '0') && (c <= '9')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
