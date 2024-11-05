/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:26 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:39:17 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a lowercase letter to uppercase.
 *
 * This function converts a lowercase letter to uppercase. If the argument is
 * not a lowercase letter, the argument is returned unchanged.
 *
 * @param c The character to be converted.
 * @return The uppercase equivalent 
 * of the character, if any; otherwise the argument.
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
