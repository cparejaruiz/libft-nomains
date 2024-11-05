/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:55:06 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:26:50 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_isdigit.c
 * @brief Checks if a character is a digit.
 *
 * This function checks if the given character is a digit (0-9).
 *
 * @param c The character to be checked.
 * @return Non-zero value if the character is a digit, zero otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
