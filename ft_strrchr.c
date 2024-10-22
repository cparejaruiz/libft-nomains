/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:55:02 by carmen            #+#    #+#             */
/*   Updated: 2024/10/22 22:36:46 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	const char		*last_occurrence;

	ch = (unsigned char)c;
	last_occurrence = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == ch)
			last_occurrence = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}
