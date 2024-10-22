/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:56:48 by carmen            #+#    #+#             */
/*   Updated: 2024/10/22 22:34:49 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
