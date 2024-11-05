/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:56:21 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:18:04 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isprint - checks if a character is printable
 * @c: the character to be checked
 *
 * This function checks whether the passed character is a printable character
 * including space. Printable characters are those which occupy a printing
 * position on a display. The function returns a non-zero value if the character
 * is printable, and zero if it is not.
 *
 * Return: Non-zero if the character is printable, zero otherwise.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
