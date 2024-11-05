/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:19:42 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:35:23 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs the string `s` to the given file descriptor, followed by a newline.
 *
 * The `ft_putendl_fd` function writes the string 
 * `s` to the given file descriptor,
 * followed by a newline character.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
