/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:26:32 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:32:45 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts the initial portion of the string pointed to by `str` to `int`.
 *
 * The function `atoi` (ASCII to Integer) 
 * takes a C-string (null-terminated character array) 
 * as an argument and interprets its content as an integer. 
 * It skips any whitespace characters 
 * at the beginning of the string, then takes an 
 * optional initial plus or minus sign followed 
 * by as many numerical digits as possible, 
 * and converts them to an integer value.
 *
 * If the string does not contain any valid integer representation, 
 * the function returns zero.
 * Note that `atoi` does not handle errors or overflow conditions, 
 * and it is generally 
 * recommended to use `strtol` or `strtoul` for more robust error handling.
 *
 * @param str Pointer to the null-terminated string to be interpreted.
 * @return The converted integer value.
 */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
	}
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i * sign);
}
