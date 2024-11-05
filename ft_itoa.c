/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:56:48 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:33:57 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an integer value to a null-terminated 
 * string using the specified base.
 *
 * The function `itoa` converts an integer value to 
 * a null-terminated string using the specified base
 * and stores the result in a char array 
 * that you must allocate. The base must be between 2 and 36,
 * inclusive, and the string is composed of digits and lowercase letters.
 *
 * @param n The integer to be converted.
 * @return The converted string.
 */

static int	ft_get_len(int n)
{
	int				len;
	unsigned int	m;

	len = 1;
	if (n < 0)
		m = -n;
	else
		m = n;
	while (m >= 10)
	{
		m = m / 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char			*num;
	int				len;
	unsigned int	m;

	len = ft_get_len(n);
	num = (char *) malloc((len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (n < 0)
		m = -n;
	else
		m = n;
	while (len--)
	{
		num[len] = (m % 10) + '0';
		m = m / 10;
	}
	if (n < 0)
		num[0] = '-';
	return (num);
}
