/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:22:35 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:50:30 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs the integer `n` to the given file descriptor.
 *
 * The `ft_putnbr_fd` function writes 
 * the integer `n` to the given file descriptor.
 *
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 */

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	else if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n ;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	num = n % 10 + '0';
	write(fd, &num, 1);
}
