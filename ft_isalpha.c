/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:52:06 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:16:10 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalpha - checks if the given character is an alphabetic letter.
 * @c: The character to be checked.
 *
 * This function returns a non-zero value if the character is an alphabetic
 * letter (either uppercase or lowercase), and zero if it is not.
 *
 * Return: Non-zero if the character is an alphabetic letter, zero otherwise.
 */

int	ft_isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z'))
		|| ((c >= 'a') && (c <= 'z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
