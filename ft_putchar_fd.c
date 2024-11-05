/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:10:09 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:49:23 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs the character `c` to the given file descriptor.
 *
 * The `ft_putchar_fd` function writes the 
 * character `c` to the given file descriptor.
 *
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
